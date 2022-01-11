#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/ioctl.h>


//IOCTL format MACRO 
#define GETSTAT _IOWR('r','a',struct stats *)
struct stats
{
   int size;
   char buff[80];
   int r_w;
};

struct stats buff_rec;

int main()
{
        int fd;
        struct stats *value;
        
        printf("Welcome to User IOCTL program \n");
 
        printf("\nOpening Driver\n");
        fd = open("/dev/myexam", O_RDWR);
        if(fd < 0) 
        {
                printf("Cannot open device file...\n");
                return 0;
        }
 
        printf("Reading Value from Structure\n");
        ioctl(fd, GETSTAT, (struct stats *)&buff_rec);

        printf("Size of buffer is %d\n", buff_rec.size);
        printf("Buffer Value is %s\n", buff_rec.buff);
        printf("Status Value of r_w is %d\n", buff_rec.r_w);
 
        printf("Closing Driver\n");
        close(fd);
}