#include <stdio.h>
void sort(int *p)
{
	int i, number_off, number_i;
	for(i = 0; i < 200; i++)
	{
		number_off = i % 10 + 1;
		number_i = i % 10;
		printf("number_off = %d, number_i = %d\n", number_off, number_i);
		if(*(p + number_i) == 0)
		{
			i++;
			continue;
		}
		if(number_off % 3 == 0) *(p + number_i) = 0;
	}
}
int main()
{
	int i, n = 10;
	int circle[n] = {3, 4, 6, 9, 13, 15, 17, 20, 30, 31}, *p;
	p = circle;
	sort(p);
	for(i = 0; i < 10; i++)
	{
		if(circle[i] != 0) printf("%d ", circle[i]);
	}
}
