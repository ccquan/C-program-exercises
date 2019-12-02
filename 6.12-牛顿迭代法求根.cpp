#include <stdio.h>
#include <math.h>
double fx(double x, double a, double b, double c, double d)
{
	double res, denominator, molecule, x1;
	int i;
	for(i = 0; fabs(x - x1) > 1e-5; i++)
	{
		x1 = x;
		denominator = (a * pow(x, 3)) + (b * pow(x, 2)) + (c * x) + d;
		molecule = (3 * a * pow(x, 2)) + (2 * b * x) + c;
		x = x1 - denominator / molecule;
	}
	return x;
}
int main()
{
	double x = 1, res;
	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	res = fx(x, a, b, c, d);
	printf("%lf", res);
	return 0;
}
