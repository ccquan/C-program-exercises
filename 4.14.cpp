#include <stdio.h>
int main()
{
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= 4 - i; j ++)
		{
			printf(" ");
		}
		for(int z = 1; z <= (2 * i - 1); z++)
		{
			printf("*");
		}
		printf("\n");
	}
	int n = 1;
	for(int i = 3; i >= 1; i--)
	{
		
		for(int j = 1; j <= n; j++)
		{
			printf(" ");
		}
		for(int z = 1; z <= (2 * i - 1); z++)
		{
			printf("*");
		}
		printf("\n");
		n++;
	}

}
