#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0, value = 0, s1_len;
	char s1[50], s2[50];
	printf("�����볤����ȵ��ַ���1��");
	gets(s1);
	printf("�����볤����ȵ��ַ���2��");
	gets(s2);
	
//	�Ƚ�
	while(s1[i] != '\0')
	{
		value += s1[i] - s2[i];
		i++;
	}
	printf("value = %d", value);
	
	return 0;
}
