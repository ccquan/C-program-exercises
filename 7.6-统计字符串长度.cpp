#include <stdio.h>
int strLenght(char *p)
{
	int count;
	while(*p != '\0')
	{
		count += 1;
		p++;
	}
	return count;
}
int main()
{
	char str[100];
	char *p = str;
	gets(p);
	printf("%d", strLenght(p)); 
	return 0;
}
