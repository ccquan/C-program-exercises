#include <stdio.h>
int main()
{
	float I, bonus, total_bonus;
	printf("������������I:");
	scanf("%f", &I);
	// 1:
	if (I <= 100000)  //С��10��Ļ�������� 
	{
		bonus = I * 0.1;  //С��10��ļ��㷽��������I * 1% Ҳ����0.1; 
		total_bonus = I + bonus;
	}
	if (I > 100000 and I <= 200000)  //10��20��Ļ�������� 
	{
		bonus = (100000 * 0.1) + (I - 100000) * 0.075;  //10��20��ļ��㷽ʽ��1������10�������������I��10����Եó��� *  0.075 Ȼ�����2��С��10��ģ�10�� * 0.01�� 
		total_bonus = I + bonus;
	}
	if (I > 200000 and I <= 400000)
	{
		bonus = 100000 * (0.1 + 0.075) + (I - 200000) * 0.05;  //100000 * (0.1 + 0.075)��20��֮�ڵļ��ϳ���20����� ��������I��20����Եó��� *  0.05 ������ͬ�� 
		total_bonus = I + bonus;
	}
	if (I > 400000 and I <= 600000)
	{
		bonus = 100000 * (0.1 + 0.075) + 200000 * 0.05 + (I - 400000) * 0.03;
		total_bonus = I + bonus;
	}
	if (I > 600000 and I <= 1000000)
	{
		bonus = 100000 * (0.1 + 0.075) + 200000 * (0.05 + 0.03) + (I - 600000) * 0.015;
		total_bonus = I + bonus;
	}
	if (I > 1000000)
	{
		bonus = 100000 * (0.1 + 0.075 +  200000 * (0.05 + 0.03) + 400000 * 0.015 + (I - 1000000) * 0.01);
		total_bonus = I + bonus;
	}
	printf("���Ľ��������ǣ�%f", total_bonus);
	
	// 2:
	switch ((int) (I / 100000))
	{
		case 0:
			{
				bonus = I * 0.1;
				total_bonus = I + bonus;
				break;
			}
		case 1:
			{
				bonus = (100000 * 0.1) + (I - 100000) * 0.075;
				total_bonus = I + bonus;
				break;
			}
		case 2:
		case 3:
			{
				bonus = 100000 * (0.1 + 0.075) + (I - 200000) * 0.05;
				total_bonus = I + bonus;
				break;
			}
		case 4:
		case 5:
			{
				bonus = 100000 * (0.1 + 0.075) + 200000 * 0.05 + (I - 400000) * 0.03;
				total_bonus = I + bonus;
				break;
			}
		case 6:
		case 7:
		case 8:
		case 9:
			{
				bonus = 100000 * (0.1 + 0.075) + 200000 * (0.05 + 0.03) + (I - 600000) * 0.015;
				total_bonus = I + bonus;
				break;
			}
		case 10:
			{
				bonus = 100000 * (0.1 + 0.075 +  200000 * (0.05 + 0.03) + 400000 * 0.015 + (I - 1000000) * 0.01);
				total_bonus = I + bonus;
				break;
			}
	}
	printf("���Ľ��������ǣ�%f", total_bonus);
}
