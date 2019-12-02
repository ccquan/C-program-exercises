#include <stdio.h>
#include <string.h>
void lenghtWord(char text[], char l_word[])
{
	int i, j = 0, lw_lenght = 0;
	char temp_word[200];
	text[strlen(text)] = ' ';  //在字符串最后加个空格用来结束最后一个单词 ，因为字符串最后一个字符一般是字母所以不会进else里面 
	for(i = 0; i < strlen(text); i++)
	{
		if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))  //判断当前字符是不是字母 
		{
			temp_word[j] = text[i];  //将字母赋值给temp_word
			j++; 
		}else
		{
			temp_word[j] = '\0';  //结束temp_word字符串 
			//将temp_word的长度得出来 ，然后判断 是否比上一个 temp_word 长，如果是就将它复制给l_word 
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
