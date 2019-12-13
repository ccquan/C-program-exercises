#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char str[])
{
	int len = strlen(str);
	int i, j;
	char temp;
//	冒泡排序 
	for(i = 0; i < len - 1; i++)
	{
		for(j = 0; j < len - 1; j++)
		{
			if(str[j] > str[j + 1])
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
} 
int main()
{
	char str[40], word = ' ';
	int i = 0;
	FILE *fp;
	if((fp = fopen("A", "r")) == NULL)
	{
		printf("打开文件失败");
		exit(0);
	}
//	打开A 
	while(word = fgetc(fp), !feof(fp))
	{
		str[i++] = word;
	}
	fclose(fp);
//	打开B 
	if((fp = fopen("B", "r")) == NULL)
	{
		printf("打开文件失败");
		exit(0);
	}
	while(word = fgetc(fp), !feof(fp))
	{
		str[i++] = word;
	}
	fclose(fp);
	str[i] = '\0';  //结束字符串 
	printf("%s已合并到C", str);
//	排序后给C
	sort(str);
	if((fp = fopen("C", "w")) == NULL)
	{
		printf("打开文件失败");
		exit(0);
	}
	fputs(str, fp);
	fclose(fp);
	return 0;
}
//查资料发现，C语言的 feof() 函数返回的是最后一次“读操作的内容”。在未改进的代码中while循环判断的是上一次循环中 fgetc() 获取到的内容，这也就能解释未改进的代码为什么会在结尾多输出“内容”了。
