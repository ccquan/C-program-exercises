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
	printf("�������һ������");
	scanf("%d", &num1);
	printf("������ڶ�������");
	scanf("%d", &num2);
	printf("���������������");
	scanf("%d", &num3);
	int max_num;
	max_num = max(num1, num2, num3);
	printf("�����δΪ��%d", max_num);
	
}

