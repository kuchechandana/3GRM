#include"header.h"
main(int argc,char ** argv)
{
	if(argc!=3)
	{
		printf("usage:./my_kill sig pid\n");
		return;
	}
	if(kill(atoi(argv[2]),atoi(argv[1]))<0)
	{
		perror("kill");
		return;
	}
	perror("kill");
}
