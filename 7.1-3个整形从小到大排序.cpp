#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void srot(int *p1, int *p2, int *p3)
{
	if(*p1 > *p2) swap(p1, p2);
	if(*p1 > *p3) swap(p1, p3);
	if(*p2 > *p3) swap(p2, p3);
}
int main()
{
	int a, b, c;
	int *p1 = &a, *p2 = &b, *p3 = &c;
	scanf("%d %d %d", p1, p2, p3);
	srot(p1, p2, p3);
//	¥Ú”° 
	printf("%d %d %d", a, b, c);
	return 0;
}
