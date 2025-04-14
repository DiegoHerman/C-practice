#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t  semaphore;
int counter=0;

void *pluscounter(void *arg) {
   sem_wait(&semaphore);
   counter++;
   printf("Counter: %d\n",counter);
   sem_post(&semaphore);
   return NULL;
}

int main() {
   pthread_t threads[6];
   sem_init(&semaphore,0,2);
   for(int i=0;i<6;i++) {
      pthread_create(&threads[i],NULL,pluscounter,NULL);
      pthread_join(threads[i],NULL);
   }
   sem_destroy(&semaphore);
   return 0;
}