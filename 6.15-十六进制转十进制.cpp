#include <stdio.h>
#include <math.h>
#include <string.h>
void hexToDec(char n[])
{
	int i, lenght = strlen(n), count = 0;
	for(i = (lenght - 1); i >= 0; i--)
	{
		if(n[i] >= '0' && n[i] <= '9')
		{
			count += ((n[i] - '0') * (pow(16, lenght-1 - i)));  //这里用幂可以得到 1 ,而用 (lenght-1 - i) * 16 会得到 0 
		}
		else if(n[i] >= 'a' && n[i] <= 'z')
		{
			count += (10 + (n[i] - 'a') * (pow(16, lenght-1 - i)));
		}
		else if(n[i] >= 'A' && n[i] <= 'Z')
		{
			count += (10 + (n[i] - 'A') * (pow(16, lenght-1 - i)));
		}
	}
	printf("%d", count);
}
int main()
{
	char n[100];
	scanf("%s", &n);
	hexToDec(n);
	return 0;
}
