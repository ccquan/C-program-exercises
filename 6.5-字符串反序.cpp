#include <stdio.h>
#include <string.h> 
void stringReverse(char str[], char new_str[])
{
	int i, j = 0;
	for(i = strlen(str) - 1; i >= 0; i--)
	{
		new_str[j] = str[i];
		j++;
	}
	new_str[j] = '\0';  //ÓÃÀ´½áÊø 
}
int main()
{
	char str[20];
	char new_str[20];
	gets(str);
	stringReverse(str, new_str);
	printf("%s", new_str);
	return 0;
}

