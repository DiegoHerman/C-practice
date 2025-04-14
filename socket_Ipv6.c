#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    struct addrinfo {
    int              ai_flags;    
    int              ai_family;    
    int              ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
    int              ai_protocol;  // use 0 for "any"
    size_t           ai_addrlen;  
    struct sockaddr *ai_addr;      
    char            *ai_canonname; 

    struct addrinfo *ai_next;    
};
struct sockaddr {
    unsigned short    sa_family;   
    char              sa_data[14];  
}; 
struct sockaddr_in {
    short int          sin_family;  // Address family, AF_INET
    unsigned short int sin_port;    // Port number
    struct in_addr     sin_addr;    // Internet address
    unsigned char      sin_zero[8]; 
};
struct sockaddr_in6 {
    u_int16_t       sin6_family;   
    u_int16_t       sin6_port;    
    u_int32_t       sin6_flowinfo; 
    struct in6_addr sin6_addr;     // IPv6 address
    u_int32_t       sin6_scope_id; // Scope ID
};

struct in6_addr {
    unsigned char   s6_addr[16];   // IPv6 address
};
}