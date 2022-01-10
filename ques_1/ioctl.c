#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "control.h"

struct stats
 		{
            int size;
            char kbuff[80];
            int r_w;
        };

int main()
{

    fd=open("/dev/IOCTL_0",O_RDWR,0777);
    if(fd<0)
    {
        printf("\n ERROR IN OPENING.\n");
        exit(1);
    }
   result=ioctl(fd,SET_BAUD_RATE , &BAUD_RATE);
    if(result<0)
    {
        printf("\n IOCTL ERROR..\n");
        return(-1);
    }
   // printf("THE BAUD CONFIRMATION :%d..\n",BAUD_RATE);
    
    ioctl(fd,GETSTATS, (struct stats*)&data);
    printf("size is : %d",data->r-w);
    printf("size is : %d",data->size);
    close(fd);
}
