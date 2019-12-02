#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float r = 1.5, Perimeter, area, superficial_area, Spherical_volume, Cylindrical_volume;
	int h = 3;
	Perimeter = PI * 2 * r;
	printf("圆周长是%.2f\n", Perimeter);
	area = PI * pow(r, 2);
	printf("圆面积是%.2f\n", area);
	superficial_area = 4 * PI * pow(r, 2);
	printf("圆球表面积是%.2f\n", superficial_area);
	Spherical_volume = (4.0 / 3) * PI * pow(r, 3);
	printf("圆球体积是%.2f\n", Spherical_volume);
	Cylindrical_volume = PI * pow(r, 2) * h;
	printf("圆柱体积是%.2f\n", Cylindrical_volume);
	
}
