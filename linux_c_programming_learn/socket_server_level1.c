#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<string.h>
#define MYPORT 8888

void processme(int s){

	char buffer[100]="plz input your name:\n";
	write(s,buffer,strlen(buffer)+1);
	char inputme[100];
	char echome[200];
	memset(inputme,0,100);
	memset(echome,0,200);
	read(s,inputme,sizeof(inputme)-1);
	inputme[strlen(inputme)-1]=0;
	sprintf(echome,"hello, %s\n",inputme);
	write(s,echome,200);

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

	for(;;){

	clientfd=accept(serverfd,(struct sockaddr *)&clientaddr,&lenofclient);
	if(clientfd<0){continue;}
	else{printf("clientfd is: %d\n",clientfd);}


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
