
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signum){
   printf("Signal received! %d\n",signum);
   // Cleanup and close up stuff here 
   
   exit(0);
}

int main(){
   signal(SIGUSR1,signal_handler);
   
   while(1) {
      printf("Waiting for SIGUSR1...\n");
      sleep(1); 
   }

   return 0;
}
