#include <stdio.h>
int main()
{
	int i, j, k, z;
	char stars[5][9]; 
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < i; j++) stars[i][j] = ' ';
		for(k = i; k < i + 5; k++) stars[i][k] = '*';
		for(z = k; z < 9; z++) stars[i][z] = ' ';
	}
//	´òÓ¡
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 9; j++)
		{
			printf("%c", stars[i][j]);
		}
		printf("\n");
	 }
	 return 0;
}
