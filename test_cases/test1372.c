
#include <stdio.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>

int main() {
    mqd_t queue;              /* Message queue descriptor */
    char buffer[1024];        
    struct mq_attr attr;      /* Attributes for the message queue */
    
    attr.mq_flags = 0;        /* Flags: 0 or O_NONBLOCK */
    attr.mq_maxmsg = 10;      /* Max. number of messages on queue */
    attr.mq_msgsize = sizeof(buffer);       /* Max. message size (bytes) */
    attr.mq_curmsgs = 0;      /* Number of messages currently in queue (ignored for mq_open()) */
    
    queue = mq_open("/myqueue", O_CREAT | O_WRONLY, 0644, &attr);
    
    if(queue == (mqd_t)-1) {
        perror("mq_open");
        return -1;
    }
    
    sprintf(buffer,"Hello Message Queue! %s\n", "Test message from the sender program.");
    
    if(mq_send(queue, buffer, sizeof(buffer), 0) < 0){
        perror("Message queue send failed");
        return -1;
    }
    
    mq_close(queue);
    return 0;
}
