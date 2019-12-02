#include <stdio.h>
void change(int *p, int m)
{
	int i;
	int copy_p[10];
	for(i = 0; i < 10; i++)  //复制多一个数组不然值被修改 
	{
		copy_p[i] = *(p + i);
	}
	for(i = 0; i < 10; i++)
	{
		*(p + i) = *(copy_p + (i + m) % 10);
	}
}
int main()
{
	int i, n = 10, m = 3;
	int number[n];
	int *p = number;
	for(i = 0; i < n; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%d", &number[i]);
	}
	change(p, m);
//	打印
	for(i = 0; i < n; i++) printf("%d ", number[i]);
	return 0;
}
