#include <stdio.h>
int main()
{
	int x, y;
	float z;
	for(x = 1; x < 20; x++)
	{
		for(y = 1; y < 33; y++)
		{
			z = 100.0 - x - y;
			if(5 * x + 3 * y + z / 3.0 == 100)
			{
				printf("公鸡%d个, 母鸡%d个, 小鸡%.0f个\n", x, y, z);
			}
		}
		
	}
}
