#include <stdio.h>
#include <string.h>
void blankSpace(char num[])
{
	int i, j = 0;
	char str[10];
	for(i = 0; i < strlen(num); i++)
	{
		str[j] = num[i];
		j++;
		str[j] = ' ';
		j++;
	}
	str[j] = '\0';
	printf("%s", str);
}
int main()
{
	int i;
	char num[4];
	gets(num);
	blankSpace(num);
	return 0;
}
