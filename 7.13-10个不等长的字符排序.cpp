#include <stdio.h>
#include <string.h>
void handle(char *p[10], int n)
{
	int i, j;
	char *temp;
//	≈≈–Ú£¨√∞≈› 
	for(i = 0; i < n - 1; i++)
	{
		for(j = i; j < n; j++)
		{
			if(strcmp(*(p + i), *(p + j)) > 0)
			{
					temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;
			}
		}
	}
}
int main()
{
	int n = 10, i;
//	char str[n][10] = {"chen454", "abc1d", "haa", "cae454m", "pape1", "zea2n", "es", "stsfeai", "seate", "sgweeesg"};
	char *str_p[10];
	char str[n][10];
	for(i = 0; i < n; i++)
	   str_p[i] = str[i];
	for(i = 0; i < n; i++)
       scanf("%s", str_p[i]);
	handle(str_p, n);
//	¥Ú”° 
	printf("≈≈–Ú∫Û£∫\n");
	for(i = 0; i < n; i++)
	{
		printf("%s\n", str_p[i]);
	}
	return 0;
}

