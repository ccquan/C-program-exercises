#include <stdio.h>
#include <string.h>
int qiuDays(int year, int month, int day)
{
	int i, Days = 0;
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year / 400 == 0) || ((year / 4 == 0) && (year / 100 != 0)) month_day[1] = 29;  //����2��29��
	for(i = 0; i < month - 1; i++)
	{
		Days += month_day[i];  //ÿ���µ����������� 
	}
	Days += day;  //����Ǽ��ŵ����� 
	return Days;
}
int main()
{
	int year, month, day;
	printf("�����������գ�");
	scanf("%d %d %d", &year, &month, &day);
	printf("���Ǹ���ĵ�%d��", qiuDays(year, month, day));
}
