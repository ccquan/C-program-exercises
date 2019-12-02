#include <stdio.h>
#include <math.h>
int main()
{
	for(;;)
	{
		double x1, x2;
		float a;
		scanf("%f", &a);
		x2 = 1.0;
		for(;;)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2.0;
			if(fabs(x1 - x2) > 0.00001)
			{
				printf("%f", x2);
				break;
			}
		}
	}
}
