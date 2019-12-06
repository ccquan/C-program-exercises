#include <stdio.h>
#define N 10
void inputNumber(int *number)
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("请输入第%d个数：", i + 1);
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
//		得出最大最小值的地址 
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
	inputNumber(number);  //输入10个数 
	change(number);  //进行处理 
	outNumber(number);  //输出10个数 
	return 0;
}
