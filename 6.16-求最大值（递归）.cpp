#include <stdio.h>
int max = 0;
int number[4];
int maximumValue(int index)
{
	if(max < number[index]) max = number[index];
	if(index == 0) return 0;
	else
	{
		maximumValue(index - 1);
	}
}
int main()
{
	int i;
	for(i = 0; i < 4; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%d", &number[i]);
	}
	maximumValue(3);
	printf("最大值是：%d", max);
	return 0;
}
//先定义一个全局的最大值，然后递归 -1 数组的下标与之对比 
