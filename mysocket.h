// Group: 37 (20CS10074 & 20CS30028)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define   SOCK_MyTCP  1234 

int my_socket( int family, int type, int protocol );
int my_connect( int Sockfd , struct sockaddr *addr, socklen_t addrlen   ) ;

int my_bind( int Sockfd , struct sockaddr *addr , socklen_t addrlen );

int my_listen( int Sockfd , int clients ) ;

int my_accept( int Sockfd , struct sockaddr * addr , socklen_t *addrlen ) ;

ssize_t my_send  ( int Sockfd ,  char *buf , size_t len , int flags ) ;


ssize_t my_recv( int Sockfd ,  char *buf , size_t len , int flags ) ;

int my_close( int Sockfd ) ;
