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
				printf("����%d��, ĸ��%d��, С��%.0f��\n", x, y, z);
			}
		}
		
	}
}
