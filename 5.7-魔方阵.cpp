#include <stdio.h>
int main()
{
	int i, n = 5;
	int row, col;
	int magic[n][n];

	row = 0; col = (n - 1) / 2;
	magic[row][col] = 1;  //固定的1
	for(i = 2; i <= (n * n); i++)
	{
		if((i - 1) % n == 0) row += 1;  //n的倍数,下一个在下一行 
		else
		{
			row -= 1;
			if (row == -1) row = n - 1;  //如果在第 0 行的话减 1 会变成 -1 行，判断如果是 -1 行的话就把 row 赋值成最后一行  //row = (row+N)%N; 

			col += 1;
			if(col == n) col = 0;  //如果在第 0 列的话减 1 会变成 n 列，判断如果是 n 列的话就把 col 赋值成第一列  //col %= N;
		}
		magic[row][col] = i;
	}
//	打印 
	for(row = 0; row < n; row++)
	{
		for(col = 0; col < n; col++)
		{
			printf("%6d", magic[row][col]);
		}
		printf("\n");
	}
	return 0;
}

//偶魔方阵：https://www.cnblogs.com/furzoom/p/furzoom-magic-square.html 
//1.数字1位于方阵中的第一行中间一列；
//从2循环到 x * x，下一个数在上一个数的右边上一行，循环到 x的倍数 的时候 x+1 在 x 的下面 
//  x x 1 x x
//  x x x x x
//  x x x x x
//  x x x x 3
//  x x x 2 x 
