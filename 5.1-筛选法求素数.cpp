#include <stdio.h>
int main()
{
//	质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
	int i, j, number = 100;
	int a[number];
	for(i = 0; i < number; i++)
	{
		a[i] = i + 1;
	}
	a[0] = 0;  //a[0] = 1,1不是质素 所以直接赋值为0 
	for(i = 1; i < number; i++)
	{
		for(j = 2; j < a[i]; j++)
		{
			if(a[i] % j == 0)
			{
				a[i] = 0;
				break;
			}
		}
	}
	
//	打印
	for(i = 0; i < number; i++)
	{
		if(a[i] != 0) printf("%d ", a[i]);
	}
	return 0; 
}
