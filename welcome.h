char *welcome_banner = "  d88b  .d88b.  .d8888.\n\
   `8P' .8P  Y8. 88'  YP\n\
    88  88    88 `8bo.  \n\
    88  88    88   `Y8b.\n\
db. 88  `8b  d8' db   8D\n\
Y8888P   `Y88P'  `8888Y'\n\n";

char *welcome_mess = "Welcome to the JOS chat server!\n\
I hope you will enjoy yourself and\n\
find and make NEW and exciting friends!\n\
Please wait while I verify your credentials...\n\n\n\n";

void print_welcome(){
	printf("%s\n",welcome_mess);
        printf("%s\n",welcome_banner);
}
