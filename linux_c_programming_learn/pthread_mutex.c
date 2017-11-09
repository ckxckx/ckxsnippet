#include<stdio.h>
#include<pthreading.h>
#include<sys/types.h>
#include<unistd.h>
#include<sched.h>
void *producter_f(void *arg);
void *consumer_f (void *arg);
pthread_mutex_t mutex;
int running =1;
int bufferitem=0;

int main(){
  pthread_t consumer_t;
  pthread_t producter_t;
  pthread_mutex_init(&mutex,NULL);
  pthread_create(&producter_t,NULL,(void *)producter_f,NULL);
  pthread_create(&consumer_t,NULL,(void *)consumer_f,NULL);
  usleep(1);
  running = 0;
  pthread_join(consumer_t,NULL);
  pthread_join(producter_t,NULL);
  pthread_mutex_destroy(&mutex);
  return 0;

}


void *producter_f(void * arg)
{
  while (running)
  {
    pthread_mutex_lock(&mutex);
    bufferitem++;
    printf("add is %d\n",bufferitem);
    pthread_mutex_unlock(&mutex);

  }
}


void *consumer_f(void * arg)
{
  while (running)
  {
    pthread_mutex_lock(&mutex);
    bufferitem--;
    printf("delt is %d\n",bufferitem);
    pthread_mutex_unlock(&mutex);

  }
}
