#include <stdio.h>
void reverse(int *p, int n)
{
	int i, j;
	for(i = 0; i <= (n - 1) / 2; i++)  //ѭ��(5 - 1) / 2 �� i = 0ʱ�� j = 4���� i = 1ʱ�� j = 3���� �������� 
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
	printf("������N������");
	scanf("%d", &n);
	int num_arr[n];
	int *p = num_arr;
	for(i = 0; i < n; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", (p + i));
	}
	reverse(p, n);
//	��ӡ 
	for(i = 0; i < n; i++) printf("%d ", *(p + i));
	return 0;
}
