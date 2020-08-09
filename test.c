#include <stdio.h>
int master_func()
{
	printf("add by master\n");
}

void dev_funcA()
{
	printf("dev_funA()\n");
}

int main(int argc, char *argv[])
{
	printf("hello world.\n");
	return 0;
}
