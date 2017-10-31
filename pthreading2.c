#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

(void *)func(int argin){
  int argout;
  argout=argin*argin;
  pthread_exit(&argout);
}
int main()
{
  int pt;
  ret=pthread_create(&pt,NULL,(void *)func,argin);
  if(!ret)
  {
    puts("pthread_create failed");
  }
  else{puts("pthread_create success");}
  int *ret=NULL;
  pthread_join(pt,&ret);
  printf("thread ret is %d \n",*ret);
return 0;

}
