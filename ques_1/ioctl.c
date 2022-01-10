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

struct stats *data;
int main()
{

int fd,result;
    fd=open("/dev/IOCTL_0",O_RDWR,0777);
    if(fd<0)
    {
        printf("\n ERROR IN OPENING.\n");
        exit(1);
    }

    ioctl(fd,GETSTATS, (struct stats*)&data);
    printf("size is : %d",data->r_w);
    printf("size is : %d",data->size);
    printf("size is : %s",data->kbuff);
    close(fd);
}
