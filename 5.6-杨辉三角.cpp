#include <stdio.h>
int main()
{
	int i = 0, j = 0, row = 10;
	int n[row][row];
	
	//先赋值最靠边的1
	for(i = 0; i < row; i++)
	{
		n[i][0] = 1;
		n[i][i] = 1;
	 } 
	 
	//然后是里面的：顶上两个数之和 ，从 1 2 1这行开始计算 
	for(i = 2; i < row; i++)
	{
		for(j = 1; j < i; j++)
		{
			n[i][j] = n[i - 1][j - 1] + n[i - 1][j];  
			//    2   =      1          +        1
			//n[2][1] = n[2 - 1][1 - 1] + n[2 - 1][1]
		}
	}
	
	//打印
	for(i = 0; i < row; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%4d", n[i][j]);
		}
		printf("\n");
	 } 
	return 0;
}
