#include"header.h"
main()
{
printf("hello\n");
printf("in p1.c pid=%d ppid=%d\n",getpid(),getppid());
system("./p1.c");
while(1);
}
