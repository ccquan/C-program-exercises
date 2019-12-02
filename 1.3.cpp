#include <stdio.h>
int max(int num1, int num2, int num3)
{
	if (num1 >= num2 && num1 >= num3) return num1;
	if (num2 >= num1 && num2 >= num3) return num2;
	if (num3 >= num1 && num3 >= num2) return num3;
}


int main()
{
	int num1, num2, num3;
	printf("请输入第一个数：");
	scanf("%d", &num1);
	printf("请输入第二个数：");
	scanf("%d", &num2);
	printf("请输入第三个数：");
	scanf("%d", &num3);
	int max_num;
	max_num = max(num1, num2, num3);
	printf("最大数未为：%d", max_num);
	
}

