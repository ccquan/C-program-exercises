#include <stdio.h>
int main()
{
	int x, y;
	printf("������x��ֵ��");
	scanf("%d", &x);
	if (x < 1) y = x;
	if (1 <= x and x < 10) y = 2 * x - 1;
	if (x >= 10) y = 3 * x - 11;
	printf("y��ֵ�ǣ�%d", y);
 } 
