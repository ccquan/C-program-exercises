#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char password[20] = {"zyxZYX"};
	char code[20];
	
//	开始计算 
	for(i = 0; i < strlen(password);  i++)
	{
		if(password[i] >= 'A' && password[i] <= 'Z')
		{
			code[i] = (26 + 1 - (password[i] - 'A' + 1)) + 64;  //+64是为了 26个字母中的第几个数 + ASCII 的值 
		}else if(password[i] >= 'a' && password[i] <= 'z')
		{
			code[i] = (26 + 1 - (password[i] - 'a' + 1)) + 96;
		}
	}
	
//	打印
	printf("密码：");
	for(j = 0; j < strlen(password); j++)
	{
		printf("%c", password[j]);
	}
	printf("\n原文："); 
	for(j = 0; j < strlen(password); j++)
	{
		printf("%c", code[j]);
	}
}
