#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>


int create_socket();
void close_socket(int);\
void my_bind(int, struct sockaddr*, int);
