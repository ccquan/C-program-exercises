#include <stdio.h>
#include <string.h>
void change(char str[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
	}
}
int main()
{
	FILE *fp;
	fp = fopen("9.12专用文件", "w");
	char str[20];
	int n = 0;  //用来记录输入了几行 
	printf("请输入字符, 输入英文”!“为结束\n");
	gets(str);
	while(strcmp(str, "!") != 0)
	{
		fputs(str, fp);
		fputs("\n", fp);
		gets(str);
		n++;
	}
	fclose(fp);
//	读取并转为大写
	printf("读取并转换：\n"); 
	int i;
	fp = fopen("9.12专用文件", "r");
	for(i = 0; i < n; i++)
	{
		fgets(str, 20, fp);
		change(str, 20);  //小写转大写 
		printf("%s", str);  //输出 
	}
	fclose(fp);
	return 0;
}
