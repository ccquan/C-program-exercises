#include <stdio.h>
int main()
{
	int a[3][3] = {
	{1, 2, 3}, 
	{4, 5, 6}, 
	{7, 8, 9}
	};
	int i, j, b[3][3];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}
	}
//	´òÓ¡ 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//1 4 7
//2 5 8
//3 6 9
