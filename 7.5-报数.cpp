#include <stdio.h>
void sort(int *p, int n)
{
	int i = 0, k = 0, people = n, number_i;
	while(people != 1)
	{
		number_i = i % n;  //使 number_i 永远在 0 - n 上 
		if(*(p + number_i) != 0)  //报到3的会赋值成0，判断是不是已被退出的 
		{
			k++;  //报数 
			if(k == 3)
			{
				*(p + number_i) = 0;
				people -= 1;  //报到3时人数减一个 
				k = 0;  // k 到 3 之后重新报数 
			}
			
		}
		i++;
	}
}
int main()
{
	int i, n = 3;
	int circle[n], *p;
	p = circle;
	for(i = 0; i < n; i++) *(p + i) = i + 1;  //把号数赋值进去数组 
	sort(p, n);
//	打印 
	for(i = 0; i < n; i++)
	{
		if(circle[i] != 0) printf("最后留下来的时原来第%d号", circle[i]);
	}
	return 0;
}
