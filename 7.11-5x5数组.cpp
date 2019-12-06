#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void handle(int *p)
{
	int i, j, *max = p, min[4], *min_p = min, address;
	for(i = 0; i < 25; i++)
	{
		if(*(p + i) > *max) *max = *(p + i);
		if(*(p + i) < *min_p)
		{
			*min_p = *(p + i);
		}
	}
//	�������С���Ǹ���Ȼ���������С�ĺ� 3 �� 
	for(i = 1; i < 4; i++)
	{
		*(min_p + i) = *p;
		for(j = 0; j < 25; j++)
		{
			if(*(p + j) < *(min_p + i) && (*(p + j) > *(min_p + i - 1))) *(min_p + i) = *(p + j);
		}
	}
//	����
	swap(p + 25 / 2, max);
	swap(p, min_p);
	swap(p + 5 - 1, min_p + 1);
	swap(p + 25 - 1, min_p + 2);
	swap(p + 21 - 1, min_p + 3);
//	printf("�м���ǣ�%d\n", *(p + 5 * 5 / 2));
//	printf("���� = %d, ���� = %d, ���� = %d, ���� = %d", *(min_p + 0), *(min_p + 1), *(min_p + 2), *(min_p + 3));
}
int main()
{
	int num_arr[5][5] = {
	{10, 20, 30, 40, 50},
	{60, 70, 80, 90, 10},
	{1, 2, 30, 4, 5},
	{6, 7, 3, 9, 300},
	{11, 12, 13, 14, 15}
	};
	int *p = &num_arr[0][0];
	handle(p);
//	��ӡ
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			printf("%6d", num_arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
