#include <stdio.h>
int main()
{
	int n[3][3];
	int i, j, count = 0;
	//��ֵ 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("�������%d���ֵ��", i + 1);
			scanf("%d", &n[i][j]);
		}
		printf("\n");
	}
	
	//����
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if((j % 2 == 0 && i % 2 == 0) || (i == 1 && j == 1))
			{
				count += n[i][j];
			 } 
		}
		
	} 
	printf("%d", count);
	return 0; 
	
 }
//1\ 2  3/
//4  5X 6
//7/ 8  9/
