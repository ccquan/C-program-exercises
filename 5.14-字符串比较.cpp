#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0, value = 0, s1_len;
	char s1[50], s2[50];
	printf("请输入长度相等的字符串1：");
	gets(s1);
	printf("请输入长度相等的字符串2：");
	gets(s2);
	
//	比较
	while(s1[i] != '\0')
	{
		value += s1[i] - s2[i];
		i++;
	}
	printf("value = %d", value);
	
	return 0;
}
