#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int english = 0, blankspace = 0, number = 0, other = 0; 
	gets(str);
//	printf("%s\n", str); 
//	printf("%d", strlen(str));
	for(int i = 0; i < strlen(str); i++)
	{
//		printf("%c\n", str[i]);
		if(str[i] >= 65 && str[i] <= 122) english += 1;
		else if(str[i] == 32) blankspace += 1;
		else if(str[i] >= 45 && str[i] <= 57) number += 1;
		else other += 1;
	}
	printf("英文:%d, 空格:%d, 数字:%d, 其他:%d", english, blankspace, number, other);
}
