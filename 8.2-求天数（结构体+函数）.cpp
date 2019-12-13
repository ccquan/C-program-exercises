#include <stdio.h>

int days(int year, int month, int day)
{
	int i, Days = 0;
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year / 400 == 0) || ((year / 4 == 0) && (year / 100 != 0))) month_day[1] = 29;  //闰年2月29天
	for(i = 0; i < month - 1; i++)
	{
		Days += month_day[i];  //每个月的天数加起来 
	}
	Days += day;  //这个是几号的天数 
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
//	打印
	printf("这是该年的第%d天", res_day);
	return 0; 
}
