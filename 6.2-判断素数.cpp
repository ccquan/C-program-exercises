#include <stdio.h>
int primeNumber(int n)
{
	int i;
	if(n == 1) return 0;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	if(primeNumber(n)) printf("������");
	else printf("��������");
	return 0;
}
//������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����(1����������2���������أ�һ����1һ����2��2Ҳ������������2�������� 
