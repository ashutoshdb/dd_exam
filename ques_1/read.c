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

    char kbuff[60];
    fd=open("/dev/IOCTL_0",O_RDWR,0777);
    if(fd<0)
    {
        printf("\n ERROR IN OPENING.\n");
        exit(1);
    }
    read(fd,kbuff,sizeof(kbuff));
    printf("DATA READ FROM KERNEL..\n >>> %s <<<..\n",kbuff);
    close(fd);
}
