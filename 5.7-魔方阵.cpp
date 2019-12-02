#include <stdio.h>
int main()
{
	int i, n = 5;
	int row, col;
	int magic[n][n];

	row = 0; col = (n - 1) / 2;
	magic[row][col] = 1;  //�̶���1
	for(i = 2; i <= (n * n); i++)
	{
		if((i - 1) % n == 0) row += 1;  //n�ı���,��һ������һ�� 
		else
		{
			row -= 1;
			if (row == -1) row = n - 1;  //����ڵ� 0 �еĻ��� 1 ���� -1 �У��ж������ -1 �еĻ��Ͱ� row ��ֵ�����һ��  //row = (row+N)%N; 

			col += 1;
			if(col == n) col = 0;  //����ڵ� 0 �еĻ��� 1 ���� n �У��ж������ n �еĻ��Ͱ� col ��ֵ�ɵ�һ��  //col %= N;
		}
		magic[row][col] = i;
	}
//	��ӡ 
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

//żħ����https://www.cnblogs.com/furzoom/p/furzoom-magic-square.html 
//1.����1λ�ڷ����еĵ�һ���м�һ�У�
//��2ѭ���� x * x����һ��������һ�������ұ���һ�У�ѭ���� x�ı��� ��ʱ�� x+1 �� x ������ 
//  x x 1 x x
//  x x x x x
//  x x x x x
//  x x x x 3
//  x x x 2 x 
