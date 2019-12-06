#include <stdio.h>
void copyString(char *p1, char *p2, int m)
{
	while(*(p1 + m) != '\0')
	{
		*p2 = *(p1 + m);
		p1++;
		p2++;
	}
	*p2 = '\0';
}
int main()
{
	int n = 100, m = 5;
	char str1[n], str2[n];
	char *p1 = str1, *p2 = str2;
	gets(p1);
	copyString(p1, p2, m);
	printf("%s", p2);
	return 0;
} 
