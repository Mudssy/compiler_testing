
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>  // Include system library for exit() function

void signal_handler(int signum){
   printf("Signal received! %d\n",signum);
}

int main(){
   signal(SIGUSR1,signal_handler);
   
   while(1) {  // Infinite loop to keep the program running
      sleep(2);  // Sleep for 2 seconds before next iteration
   }

   return 0;
}
