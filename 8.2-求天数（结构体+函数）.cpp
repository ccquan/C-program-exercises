#include <stdio.h>

int days(int year, int month, int day)
{
	int i, Days = 0;
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year / 400 == 0) || ((year / 4 == 0) && (year / 100 != 0))) month_day[1] = 29;  //����2��29��
	for(i = 0; i < month - 1; i++)
	{
		Days += month_day[i];  //ÿ���µ����������� 
	}
	Days += day;  //����Ǽ��ŵ����� 
	return Days;
}
int main()
{
	struct Date
	{
		int year;
		int month;
		int day;
	}today = {2019, 12, 6};
	int res_day = days(today.year, today.month, today.day);
//	��ӡ
	printf("���Ǹ���ĵ�%d��", res_day);
	return 0; 
}
