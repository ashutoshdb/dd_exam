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
    int fd,result;

    char ubuff[60]="THIS IS USER BUFFER ..SENDING DATA TO KERNEL..\n";
    fd=open("/dev/myexam",O_RDWR,0777);
    if(fd<0)
    {
        printf("\n ERROR IN OPENING.\n");
        exit(1);
    }
    write(fd,ubuff,sizeof(ubuff));
    close(fd);
}
