#include <stdio.h>
int main()
{
	int result;
	char chengji;
	printf("������ɼ���");
	scanf("%d", &result);
	if (result >= 90) chengji = 'A';
	if (result >= 80 and result <= 89) chengji = 'B';
	if (result >= 70 and result <= 79) chengji = 'C';
	if (result >= 60 and result <= 69) chengji = 'D';
	if (result < 60) chengji = 'E';
	printf("���ĳɼ��ǣ�%c", chengji);
}
