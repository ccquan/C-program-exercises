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
	fp = fopen("9.12ר���ļ�", "w");
	char str[20];
	int n = 0;  //������¼�����˼��� 
	printf("�������ַ�, ����Ӣ�ġ�!��Ϊ����\n");
	gets(str);
	while(strcmp(str, "!") != 0)
	{
		fputs(str, fp);
		fputs("\n", fp);
		gets(str);
		n++;
	}
	fclose(fp);
//	��ȡ��תΪ��д
	printf("��ȡ��ת����\n"); 
	int i;
	fp = fopen("9.12ר���ļ�", "r");
	for(i = 0; i < n; i++)
	{
		fgets(str, 20, fp);
		change(str, 20);  //Сдת��д 
		printf("%s", str);  //��� 
	}
	fclose(fp);
	return 0;
}
