#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
void sort(char *p1, char *p2, char *p3)
{
	if(strcmp(p1, p2) > 0) swap(p1, p2);
	if(strcmp(p1, p3) > 0) swap(p1, p3);
	if(strcmp(p2, p3) > 0) swap(p2, p3);
}
int main()
{
	char a[100], b[100], c[100];
	char *p1 = a, *p2 = b, *p3 = c;
	scanf("%s %s %s", p1, p2, p3);
	sort(p1, p2, p3);
//	¥Ú”° 
	printf("%s %s %s", a, b, c);
	return 0;
}
