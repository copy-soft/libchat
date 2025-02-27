#include <arpa/inet.h>  //inet_addr define
#include <stdio.h>  //printf()
#include <unistd.h>  //close(), fread()



int createSocket(){
        int sock=socket(AF_INET, SOCK_STREAM, 0);
        //if(sock)
        std::cout <<__FILE__<<":"<<__LINE__<<std::endl;
        //else
        //std::cout << "creation socket error" << std::endl;
        return sock;
}

