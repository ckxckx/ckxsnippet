#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(int argc, **argv)
{
	int i;
	int sockfd; 
	int clientfd;
	socklen_t socklen;
	struct sockaddr_in srv_addr;
	struct sockaddr_in cli_addr;

	printf("argc is : %d",argc);
	srv_addr.sin_family=AF_INET;
	srv_addr.sin_port=htons(8888);
	srv_addr.sin_addr.s_addr=htonl(INADDR_ANY);

	sockfd=socket(AF_INTET,SOCK_STREAM,IPPROTO_IP);
	
	bind(sockfd,(struct sockaddr *)&srv_addr, sizeof(srv_addr));

	listen(sockfd,0);

	....

