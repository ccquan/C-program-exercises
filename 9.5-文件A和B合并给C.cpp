#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char str[])
{
	int len = strlen(str);
	int i, j;
	char temp;
//	ð������ 
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
		printf("���ļ�ʧ��");
		exit(0);
	}
//	��A 
	while(word = fgetc(fp), !feof(fp))
	{
		str[i++] = word;
	}
	fclose(fp);
//	��B 
	if((fp = fopen("B", "r")) == NULL)
	{
		printf("���ļ�ʧ��");
		exit(0);
	}
	while(word = fgetc(fp), !feof(fp))
	{
		str[i++] = word;
	}
	fclose(fp);
	str[i] = '\0';  //�����ַ��� 
	printf("%s�Ѻϲ���C", str);
//	������C
	sort(str);
	if((fp = fopen("C", "w")) == NULL)
	{
		printf("���ļ�ʧ��");
		exit(0);
	}
	fputs(str, fp);
	fclose(fp);
	return 0;
}
//�����Ϸ��֣�C���Ե� feof() �������ص������һ�Ρ������������ݡ�����δ�Ľ��Ĵ�����whileѭ���жϵ�����һ��ѭ���� fgetc() ��ȡ�������ݣ���Ҳ���ܽ���δ�Ľ��Ĵ���Ϊʲô���ڽ�β����������ݡ��ˡ�
