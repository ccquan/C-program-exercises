#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "a123x456  17966?   302tab8576", *p = str, a[20][20], temp[20];
	str[strlen(str)] = ' ';  //在最后添加一个非数字字符，用来进 else 结束掉最后一个数字组 
	int i = 0, j = 0;
	while(*p)
	{
		if(*p >= '0' && *p <= '9')
		{
			temp[j++] = *p;
		}
		else
		{
			if(*(p - 1) >= '0' && *(p - 1) <= '9')
			{
				temp[j] = '\0';
				strcpy(a[i++], temp);
				j = 0;
			}
		}
		p++;
	}
//	打印
	int k;
	for(k = 0; k < i; k++) printf("%s\n", a[k]);
	return 0;
}
