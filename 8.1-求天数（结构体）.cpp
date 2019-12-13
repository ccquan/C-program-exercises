#include <stdio.h>
int main()
{
	struct Data
	{
		int year;
		int month;
		int day;
	}today = {2019, 12, 6};
//	计算
	int i, days = 0; 
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((today.year / 400 == 0) || ((today.year / 4 == 0) && (today.year / 100 != 0))) month_day[1] = 29;  //闰年2月29天
	for(i = 0; i < today.month - 1; i++)
	{
		days += month_day[i];  //每个月的天数加起来 
	}
	days += today.day;  //加上这个月的天数 
//	打印
	printf("该日在本年中是第%d天", days);
	return 0; 
}
