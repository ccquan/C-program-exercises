#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str;
	FILE *fp;
	if((fp = fopen("test", "w")) == NULL)
	{
		printf("���ļ�ʧ��");
		exit(0);
	}
	str = getchar();  //��ѭ���� 
	while(str != '!')
	{
		if(str >= 'a' && str <= 'z') fputc(str - 32, fp);  //�����Сд�Ļ� �� 32
		else fputc(str, fp);
		str = getchar();
	}
	fclose(fp);
	return 0;
}
