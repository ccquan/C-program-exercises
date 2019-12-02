#include<stdio.h>
int main()
{
	int number[5][5] = {
	{ 1,  3,  5,  7, 9},
	{ 2,  4,  6,  8, 11},
	{ 3,  5,  7,  9, 10}, 
	{ 4,  6,  8, 10, 12},
	{10, 20, 30, 40, 50}}; 
	int i, j, k, andian;
	int max_value, max_col, min_value, min_row;
	for(i = 0; i < 5; i++)  //遍历每行 
	{
//		得出每行最大的值和最大值的列
		max_value = number[i][0];
		for(j = 0; j < 5; j++)
		{
			if(max_value < number[i][j])
			{
				max_value = number[i][j];
				max_col = j;
			}
		}

//		得出最大值那一列的最小值 
		min_value = number[0][max_col];
		for(k = 0; k < 5; k++)
		{
			if(min_value > number[k][max_col])
			{
				min_value = number[k][max_col];
				min_row = k;
			}
		}

		if(max_value == min_value)
		{
			printf("鞍点是%d，在第%d行%d列", number[min_row][max_col], min_row + 1, max_col + 1);
			andian = 1;
		}
	}
	if(!andian) printf("没有找到鞍点");
	return 0;
} 

