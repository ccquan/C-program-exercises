#include <stdio.h>
#define N 10
void inputNumber(int *number)
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", number + i);
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void change(int *number)
{
	int i, *max = number, *min = number;
	for(i = 0; i < N; i++)
	{
//		�ó������Сֵ�ĵ�ַ 
		if(*max < *(number + i)) max = number + i;
		if(*min > *(number + i)) min = number + i;
	}
	swap(max, number + (N - 1));
	swap(min, number + 0);
}
void outNumber(int *number)
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("%d ", *(number + i));
	}
}
int main()
{
	int number[N];
	inputNumber(number);  //����10���� 
	change(number);  //���д��� 
	outNumber(number);  //���10���� 
	return 0;
}
