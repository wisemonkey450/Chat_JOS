#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>

//Returns the correct fd for
//the socket
//Will be TCP NOT UDP
int create_socket(){
	int status = 0;
	if((status = socket(AF_INET, SOCK_STREAM, 0)) < 0){
		perror("socket: ");
		exit(-1);
	}
	return status;
}

//Simply closes the socket
void close_socket(int sock){
	int status = 0;
	if((status = close(sock)) < 0 ){	
		perror("close: ");
		exit(-1);
	}
}

void my_bind(int fd, struct sockaddr *ad, int addr_len){
	int status = 0;
	if((status = bind(fd,ad,addr_len)) < 0){
		perror("bind: ");
		exit(-1);
	}
}
