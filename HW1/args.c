#include <stdio.h>

int main(int argc, char *argv[])
{
	int increment;
	for(increment = 0; increment < argc; increment++)
		printf("%s\n", argv[increment]);
	return(0);
}
