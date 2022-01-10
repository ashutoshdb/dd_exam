#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "control.h"


int main()
{
    int fd,result,BAUD_RATE =9600,STP_BITS=8;
    struct default_data ToSend={9600,1,0};
    char ubuff[60]="THIS IS USER BUFFER ..SENDING DATA TO KERNEL..\n";
    fd=open("/dev/IOCTL_0",O_RDWR,0777);
    if(fd<0)
    {
        printf("\n ERROR IN OPENING.\n");
        exit(1);
    }
    write(fd,ubuff,sizeof(ubuff));
    close(fd);
}
