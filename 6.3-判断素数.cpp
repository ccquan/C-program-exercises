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
	if(primeNumber(n)) printf("是素数");
	else printf("不是素数");
	return 0;
}
//质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。(1不是质数，2又两个因素，一个是1一个是2，2也是它本身，所以2是素数） 
