#include <stdio.h>
#include <string.h>
void vowelChange(char str1[], char str2[])
{
	int i, j, k = 0;
	char vowel[] = {"aeiou"};
	for(i = 0; i < strlen(str1); i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(str1[i] == vowel[j])
			{
				str2[k] = str1[i];
				k++;
			}
		}
	}
}

int main()
{
	char str1[] = {"administrator"};
	char str2[20];
	vowelChange(str1, str2);
//	´òÓ¡
	printf("%s", str2);
	return 0;
}
