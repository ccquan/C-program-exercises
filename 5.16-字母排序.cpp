#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char nation[10][20];
	
//	 ‰»Î 
	for(i = 0; i < 10; i++)
	{
		gets(nation[i]);
	}
	
//	≈≈–Ú£¨√∞≈› 
	for(i = 0; i < 9; i++)
	{
		for(j = i; j < 10; j++)
		{
			if(strcmp(nation[i], nation[j]) > 0)
			{
					char temp_char[20];
					strcpy(temp_char, nation[i]);
					strcpy(nation[i], nation[j]);
					strcpy(nation[j], temp_char);
			}
		}
	}
	
//	¥Ú”°
	printf("≈≈–Ú∫Û£∫\n");
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < strlen(nation[i]); j++)
		{
			printf("%c", nation[i][j]); 
		}
		printf("\n");
	}
	return 0;
}
