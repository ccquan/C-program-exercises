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
	swap(max, number + 9);  //最大值的地址和 0+9 最后一个的地址 
	i = number; *min = *i;  //重新使 i 指向 number[0] 
	for(; i < p; i++)
	{
		if(*min > *i) min = i;
	}
	swap(min, number);  //最小值的地址和 0 第一个的地址 
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
