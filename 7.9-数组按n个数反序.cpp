#include <stdio.h>
void stringReverse(char *p, int n)
{
	int i, j;
	for(i = 0; i <= (n - 1) / 2; i++)  //循环(5 - 1) / 2 次 i = 0时与 j = 4交换 i = 1时与 j = 3交换 依此类推 
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
