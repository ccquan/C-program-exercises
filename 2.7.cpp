#include <stdio.h>
#include <math.h>
int main()
{
	float m;
	int d = 300000, p = 6000;
	float r = 0.01;
	m = log(p / (p - d * r)) / log(1 + r);
	printf("%.2f", m);
}
