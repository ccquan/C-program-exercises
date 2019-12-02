#include <stdio.h>
# include <stdlib.h>
#include <string.h>


int main()
{
	int i, j, k, son = 0;
	char son_str[] = "";
	for(i = 1; i < 1000; i++)
	{
		for(j = 1; j < i; j++)
		{
			if(i % j == 0) son += j;
		}
		if(i == son)
		{
			printf("%d: its factors are ", i);
			for(k = 1; k < i; k++)
			{
				if(i % k == 0) printf("%d", k);
				if(i / 2 == k) {printf("."); break;}
				if(i % k == 0) printf(",");
			}
			printf("\n");
		}
		son = 0;	
	}
	
}
