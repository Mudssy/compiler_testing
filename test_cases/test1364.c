
#include <stdio.h>
#include <string.h> 
#include <unistd.h>
#include <sys/socket.h> 
#include <netinet/in.h> 

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    
    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) { 
        perror("socket failed"); 
        return -1;
    }
      
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(5000);
      
    // Attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) { 
        perror("bind failed"); 
        return -1;
    }
    
    // Listen for connections
    if (listen(server_fd, 3) < 0) {
        perror("listen");
        return -1;
    }
    
    while(1) {
        printf("\nWaiting for a connection ...");
        
        // Accept incoming connection
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0){ 
            perror("accept");
            return -1;
        }
    }
    
    return 0;
}
