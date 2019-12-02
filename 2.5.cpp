#include <stdio.h>
int main()
{
	float c,f;
	printf("请输入华氏温度：");
	scanf("%f", &f);
	c = (f - 32) * (5.0 / 9);
	printf("摄氏温度是：%.2f", c);
	
}
