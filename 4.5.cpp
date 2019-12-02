#include <stdio.h>
int main()
{
	int m, n, max_common_divisor, min_common_multiple;
	scanf("%d, %d", &m, &n);
	for(int i = 1; i <= m; i++)
	{
		if(m % i == 0)
		{
//			for(int j = 1; j < n; j++)
//			{
				if(n % i == 0) max_common_divisor = i;
//			}
		}
	}
	
	min_common_multiple = max_common_divisor * (m / max_common_divisor) * (n / max_common_divisor);
	printf("最大公约数：%d\n最小公倍数：%d", max_common_divisor, min_common_multiple);
}
