#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
static int retvalue;
static int run=9090;
static void * addr=NULL;
int func(int *argin){
int argout=909;
  //argout=argin+arogin;
	int *myarg=argin;
	printf("argin is %d\n",*myarg);
	argout=(*myarg)*2;
	printf("myarg is %d\n",argout);	
	printf("addr is %p\n",&argout);
	addr=&argout;
	getchar();
	printf("int on addr is %d\n",*(int *)addr);
 	pthread_exit((void*)&argout);//同理也需要强制类型转换
	return 0;
}
int main(int argc, char ** argv)
{
  unsigned long int  pt;
  int argin=9; //=atoi(argv[1]);
  int *ret=NULL;
  int rett=pthread_create(&pt,NULL,(void *)func,&argin);//�注意回调函数必须满足传入参数是指针类型
 //int *ret=NULL;
  if(!rett)
  {
    puts("pthread_create successed");
  }
  else{puts("pthread_create failed");}
	//usleep(1);
	pthread_join(pt,(void *)&ret); // pthread(phtread_t,**void), 因为ret是int *,所以强制类型转换成指向void的指针才不会警告
  printf("thread ret is %d \n",*ret);
getchar();
int *me=(int *)addr;
printf("int on addr is %d\n",*me);
return 0;

}
