#include <stdio.h>
void stringReverse(char *p, int n)
{
	int i, j;
	for(i = 0; i <= (n - 1) / 2; i++)  //ѭ��(5 - 1) / 2 �� i = 0ʱ�� j = 4���� i = 1ʱ�� j = 3���� �������� 
	{
		j = n - 1 - i;
		char temp;
		temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
	}
}
int main()
{
	int n = 5;
	char a[100];
	char *p = a;
	gets(p);
	stringReverse(p, n);
	printf("%s", p);
	return 0;
} 
