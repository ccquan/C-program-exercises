#include <stdio.h>
#include <string.h>
int main()
{
	int i, j = 0;
	char str1[20] = {"�����ַ���1"}; 
	char str2[20] = {"�����ַ���2"}; 
	char new_str[40];
	
//	��һ��ѭ����Ȼ���ж�i����iѭ����str1���ٽ�str2��ֵ��ֵ��new_str 
	for(i = 0; i < (strlen(str1) + strlen(str2)); i++)
	{
		if(i < strlen(str1))
		{
			new_str[i] = str1[i];
		}
		else
		{
			new_str[i] = str2[j];
			j++;
		}
	}

//    ��ӡ
	for(i = 0; i < strlen(new_str); i++)
	{
		printf("%c", new_str[i]);
	 } 
}
