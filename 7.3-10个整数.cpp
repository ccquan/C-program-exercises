#include <stdio.h>
void inputNumber(int *number)
{
	int *i, *p;
	i = number; p = number + 10;
	for(; i < p; i++)
	{
		scanf("%d", i);
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
	int *i, *p, *max, *min;
	i = number; p = number + 10;
	*max = *i;
	for(; i < p; i++)
	{
		if(*max < *i) max = i;
	}
	swap(max, number + 9);  //���ֵ�ĵ�ַ�� 0+9 ���һ���ĵ�ַ 
	i = number; *min = *i;  //����ʹ i ָ�� number[0] 
	for(; i < p; i++)
	{
		if(*min > *i) min = i;
	}
	swap(min, number);  //��Сֵ�ĵ�ַ�� 0 ��һ���ĵ�ַ 
}
void outNumber(int *number)
{
	int *i, *p;
	i = number; p = number + 10;
	for(; i < p; i++)
	{
		printf("%d ", *i);
	}
}
int main()
{
	int number[10];
	inputNumber(number);
	change(number);
	outNumber(number);
	return 0;
}
