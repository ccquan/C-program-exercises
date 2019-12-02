#include <stdio.h>
#include <string.h>
int qiuDays(int year, int month, int day)
{
	int i, Days = 0;
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year / 400 == 0) || ((year / 4 == 0) && (year / 100 != 0)) month_day[1] = 29;  //闰年2月29天
	for(i = 0; i < month - 1; i++)
	{
		Days += month_day[i];  //每个月的天数加起来 
	}
	Days += day;  //这个是几号的天数 
	return Days;
}
int main()
{
	int year, month, day;
	printf("请输入年月日：");
	scanf("%d %d %d", &year, &month, &day);
	printf("这是该年的第%d天", qiuDays(year, month, day));
}
