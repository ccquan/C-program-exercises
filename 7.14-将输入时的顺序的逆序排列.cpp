#include <stdio.h>
void reverse(int *p, int n)
{
	int i, j;
	for(i = 0; i <= (n - 1) / 2; i++)  //循环(5 - 1) / 2 次 i = 0时与 j = 4交换 i = 1时与 j = 3交换 依此类推 
	{
		j = n - 1 - i;
		int temp;
		temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
	}
}
int main()
{
	int n, i;
	printf("请输入N的数：");
	scanf("%d", &n);
	int num_arr[n];
	int *p = num_arr;
	for(i = 0; i < n; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%d", (p + i));
	}
	reverse(p, n);
//	打印 
	for(i = 0; i < n; i++) printf("%d ", *(p + i));
	return 0;
}
