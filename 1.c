#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int space, star, a;
	for (space = 1; space < 6; space++)
	{
		for (a = 6; a > space; a--)
		{
			printf(" ");
		}
		for (star = 1; star<=2*space-1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


		
