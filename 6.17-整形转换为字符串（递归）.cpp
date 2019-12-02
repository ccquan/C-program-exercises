#include <stdio.h>
int i = 0;
char str[10];
void outPut(int n)
{
	if(n / 10 != 0) outPut(n / 10);
	str[i++] = n % 10 + '0';
}
int main()
{
	int n;
	scanf("%d", &n);
	outPut(n);
	printf("%s", str);
	return 0;
}
