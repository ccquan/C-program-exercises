#include <stdio.h>
void fun(int *p)
{
	int i, j, temp;
	for(i = 0; i < 3; i++)
	{
		for(j = i; j < 3; j++)
		{
//			���� p * j,  j = i ��һ�Σ�123��147���� �ڶ��� 56 �� 58 ����j = 0 �Ļ����֮ǰ�Ļ���ȥ 
			temp = *(p + 3 * j + i);
			*(p + 3 * j + i) = *(p + 3 * i + j);
			*(p + 3 * i + j) = temp;
		}
	}
}
int main()
{
	int num_arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int *p = &num_arr[0][0], i, j;
	fun(p);
//	��ӡ
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", num_arr[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
