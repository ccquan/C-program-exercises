#include <stdio.h>
int main()
{
	struct Data
	{
		int year;
		int month;
		int day;
	}today = {2019, 12, 6};
//	����
	int i, days = 0; 
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((today.year / 400 == 0) || ((today.year / 4 == 0) && (today.year / 100 != 0))) month_day[1] = 29;  //����2��29��
	for(i = 0; i < today.month - 1; i++)
	{
		days += month_day[i];  //ÿ���µ����������� 
	}
	days += today.day;  //��������µ����� 
//	��ӡ
	printf("�����ڱ������ǵ�%d��", days);
	return 0; 
}
