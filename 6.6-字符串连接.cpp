#include <stdio.h>
#include <string.h> 
void stringJoin(char str1[], char str2[], char new_str[])
{
	int i, j;
	for(i = 0; i < strlen(str1); i++)
	{
		new_str[i] = str1[i];
	}
	for(j = 0; j < strlen(str2); j++)
	{
		new_str[i] = str2[j];
		i++;
	}
	new_str[i] = '\0';
}
int main()
{
	char str1[20], str2[20], new_str[40];
	gets(str1);
	gets(str2);
	stringJoin(str1, str2, new_str);
	printf("%s", new_str);
	return 0;
}

