#include <stdio.h>
int main()
{
	float wages, wages_count;  //定义工资和工资总数 
	int number = 0;  //定义人数 
	
	while (true)  //死循环 
	{
		printf("请输入工资：");
		scanf("%f", &wages);
		if (wages == -1)  //如果工资是-1退出循环 
			break;
		number++;  //每循环一次人数加1 
		wages_count += wages;  //每次循环工资相加 
	}
	printf("平均工资是：%f", wages_count / number);  //工资总数除于人数等于平均数 
}
