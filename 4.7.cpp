#include <stdio.h>
int main()
{
	//1 + 1*2 + 1*2*3 + 1*2*3*4 + 1*2*3*4*5
	long long int n = 1, temp = 0, num = 0;
	for(int i = 1; i <= 20; i++)
	{
		temp = n * i;
		num = num + temp;
		n = temp;
	}
	printf("%lld", num);
}
