#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>


void usage(){
	printf("Usage: ./server [IP] [options]\n");
	exit(-1);
}
