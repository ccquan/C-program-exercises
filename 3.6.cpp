#include <stdio.h>
int main()
{
	float I, bonus, total_bonus;
	printf("请输入月利润I:");
	scanf("%f", &I);
	// 1:
	if (I <= 100000)  //小于10万的会进入这里 
	{
		bonus = I * 0.1;  //小于10万的计算方法是利润I * 1% 也就是0.1; 
		total_bonus = I + bonus;
	}
	if (I > 100000 and I <= 200000)  //10万到20万的会进入这里 
	{
		bonus = (100000 * 0.1) + (I - 100000) * 0.075;  //10万到20万的计算方式是1、超过10万的利润（用利润I减10万可以得出） *  0.075 然后加上2、小于10万的（10万 * 0.01） 
		total_bonus = I + bonus;
	}
	if (I > 200000 and I <= 400000)
	{
		bonus = 100000 * (0.1 + 0.075) + (I - 200000) * 0.05;  //100000 * (0.1 + 0.075)是20万之内的加上超过20万的是 （用利润I减20万可以得出） *  0.05 ，下面同上 
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
	printf("您的奖金总数是：%f", total_bonus);
	
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
	printf("您的奖金总数是：%f", total_bonus);
}
