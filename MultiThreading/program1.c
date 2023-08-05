#include<stdio.h>
#include<pthread.h>

int main () {

    pthread_t tid;
    printf("main id = %d",pthread_self());
    return 0;
} 