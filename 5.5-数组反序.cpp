#include <stdio.h>
int main()
{
	int lenght, i, j = 0;
	printf("请输入数组的长度：");
	scanf("%d", &lenght);
	int num_arr[lenght];
	for(i = 0; i < lenght; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%d", &num_arr[i]);
	}
//	第二种： 
	for(i = 0; i <= ((lenght - 1) / 2); i++)
	{
		j = lenght - 1 - i;
		int temp;
		temp = num_arr[j];
		num_arr[j] = num_arr[i];
		num_arr[i] = temp;
	}

//	 查看 
	printf("逆序后顺序：：");
	for(i = 0; i  < lenght; i++)
	{
	 	printf("%d ", num_arr[i]);
	}
	return 0;
 } 
