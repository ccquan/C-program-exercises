#include <stdio.h>
int GCD(int m, int n)
{
//	循环从1到M的数，然后求生M的约数，然后看是不是N的约数， 如果是就是公约数，然后记录，循环到最后就能得出最大公约数 
	int max_common_divisor;
	for(int i = 1; i <= m; i++)
	{
		if(m % i == 0)
		{
			if(n % i == 0) max_common_divisor = i;
		}
	}
	return max_common_divisor;
}
int LCM(int m, int n)
{
	//先得到最大公约数，然后公式：（m除于最大公约数 * n除于最大公约数 ）* 最大公约数  得出最小公倍数 
	int max_common_divisor, min_common_multiple;
	max_common_divisor = GCD(m, n);
	min_common_multiple = max_common_divisor * (m / max_common_divisor) * (n / max_common_divisor);
	return min_common_multiple;
}
int main()
{
	int one, two;
	printf("请输入第一个数：");
	scanf("%d", &one);
	printf("请输入第而个数：");
	scanf("%d", &two);

//	打印
	printf("最大公约数是：%d, 最小公倍数是：%d", GCD(one, two), LCM(one, two));
	printf("这个另一个公式的最小公倍数：%d", (one * two / GCD(one, two)));
	return 0;
} 
