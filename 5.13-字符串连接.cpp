#include <stdio.h>
#include <string.h>
int main()
{
	int i, j = 0;
	char str1[20] = {"我是字符串1"}; 
	char str2[20] = {"我是字符串2"}; 
	char new_str[40];
	
//	用一个循环，然后判断i，当i循环完str1后再将str2的值赋值给new_str 
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

//    打印
	for(i = 0; i < strlen(new_str); i++)
	{
		printf("%c", new_str[i]);
	 } 
}
