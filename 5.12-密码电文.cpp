#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char password[20] = {"zyxZYX"};
	char code[20];
	
//	��ʼ���� 
	for(i = 0; i < strlen(password);  i++)
	{
		if(password[i] >= 'A' && password[i] <= 'Z')
		{
			code[i] = (26 + 1 - (password[i] - 'A' + 1)) + 64;  //+64��Ϊ�� 26����ĸ�еĵڼ����� + ASCII ��ֵ 
		}else if(password[i] >= 'a' && password[i] <= 'z')
		{
			code[i] = (26 + 1 - (password[i] - 'a' + 1)) + 96;
		}
	}
	
//	��ӡ
	printf("���룺");
	for(j = 0; j < strlen(password); j++)
	{
		printf("%c", password[j]);
	}
	printf("\nԭ�ģ�"); 
	for(j = 0; j < strlen(password); j++)
	{
		printf("%c", code[j]);
	}
}
