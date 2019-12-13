#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str;
	FILE *fp;
	if((fp = fopen("test", "w")) == NULL)
	{
		printf("打开文件失败");
		exit(0);
	}
	str = getchar();  //在循环外 
	while(str != '!')
	{
		if(str >= 'a' && str <= 'z') fputc(str - 32, fp);  //如果是小写的话 减 32
		else fputc(str, fp);
		str = getchar();
	}
	fclose(fp);
	return 0;
}
