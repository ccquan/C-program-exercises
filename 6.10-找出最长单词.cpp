#include <stdio.h>
#include <string.h>
void lenghtWord(char text[], char l_word[])
{
	int i, j = 0, lw_lenght = 0;
	char temp_word[200];
	text[strlen(text)] = ' ';  //���ַ������Ӹ��ո������������һ������ ����Ϊ�ַ������һ���ַ�һ������ĸ���Բ����else���� 
	for(i = 0; i < strlen(text); i++)
	{
		if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))  //�жϵ�ǰ�ַ��ǲ�����ĸ 
		{
			temp_word[j] = text[i];  //����ĸ��ֵ��temp_word
			j++; 
		}else
		{
			temp_word[j] = '\0';  //����temp_word�ַ��� 
			//��temp_word�ĳ��ȵó��� ��Ȼ���ж� �Ƿ����һ�� temp_word ��������Ǿͽ������Ƹ�l_word 
			int tempw_lenght = strlen(temp_word);  
			if(tempw_lenght > lw_lenght)
			{
				strcpy(l_word, temp_word);
				lw_lenght = strlen(l_word);
			}
			j = 0;
		}
	}
}

int main()
{
	char text[200];
	char l_word[200];
	gets(text);
	lenghtWord(text, l_word);
	printf("%s", l_word);
	return 0;
}
//Behind every successful man there's a lot u unsuccessful years
