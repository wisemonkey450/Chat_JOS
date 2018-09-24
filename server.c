#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>
#include <arpa/inet.h>
//#include<<openssl/rand.h>
//#include <openssl/ssl.h>
//#include <openssl/err.h>

#include "welcome.h"
#include "my_socket.h"
#include "usage.h"

#define PORT 40779

/*char *welcome_banner = "  d88b  .d88b.  .d8888.\n\
   `8P' .8P  Y8. 88'  YP\n\
    88  88    88 `8bo.  \n\
    88  88    88   `Y8b.\n\
db. 88  `8b  d8' db   8D\n\
Y8888P   `Y88P'  `8888Y'\n\n";

char *welcome_mess = "Welcome to the JOS chat server!\n\
I hope you will enjoy yourself and\n\
find and make NEW and exciting friends!\n\
Please wait while I verify your credentials...\n\n\n\n"
*/
int main(int argc, char ** argv){	
	//Open socket
	int sockfd;
	sockfd = create_socket();
	
	//Do super cool shit
	if(argc < 3){
		usage();
	}
	//Welcome
	print_welcome();
	
	char *temp_ip = argv[1];

	//Put the IP address into a sockaddr_in struct
	//Eventually USE GETOPT!!!
	struct sockaddr_in host_addr;
	int s;
	
	host_addr.sin_family = AF_INET;
	host_addr.sin_port = htons(PORT);
	inet_pton(AF_INET, temp_ip, &host_addr.sin_addr); 
	
//	printf("%s\n",inet_ntoa(host_addr.sin_addr));	

	//Assign the IP to the socket
	my_bind(sockfd, ((struct sockaddr*)&host_addr), sizeof(host_addr));

	//Close socket
	close_socket(sockfd);
	return 0;

}
