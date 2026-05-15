#include <stdio.h>

int main()
{
	unsigned char a = 0b1010;

	if(a&1)
		printf("odd number\n");
	else
		printf("even number\n");

	return 0;
}
