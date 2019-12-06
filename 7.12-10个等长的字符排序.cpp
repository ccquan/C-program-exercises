#include <stdio.h>
#include <string.h>
void handle(char str[][10], int n)
{
	int i, j;
	char temp[10];
//	≈≈–Ú£¨√∞≈› 
	for(i = 0; i < n - 1; i++)
	{
		for(j = i; j < n; j++)
		{
			if(strcmp(str[i], (str[j])) > 0)
			{
					strcpy(temp, str[i]);
					strcpy(str[i], str[j]);
					strcpy(str[j], temp);
			}
		}
	}
}
int main()
{
	int n = 10, i;
//	char str[n][10] = {"chen", "abcd", "haha", "caem", "pape", "zean", "toon", "stai", "sete", "sgwg"};
	char str[n][10];
	for(i = 0; i < n; i++)
       scanf("%s", str[i]);
	handle(str, n);
//	¥Ú”° 
	printf("≈≈–Ú∫Û£∫\n");
	for(i = 0; i < n; i++)
	{
		printf("%s\n", str[i]);
	}
	return 0;
}

