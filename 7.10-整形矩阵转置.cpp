#include <stdio.h>
void fun(int *p)
{
	int i, j, temp;
	for(i = 0; i < 3; i++)
	{
		for(j = i; j < 3; j++)
		{
//			列是 p * j,  j = i 第一次：123跟147换， 第二次 56 跟 58 换，j = 0 的话会把之前的换回去 
			temp = *(p + 3 * j + i);
			*(p + 3 * j + i) = *(p + 3 * i + j);
			*(p + 3 * i + j) = temp;
		}
	}
}
int main()
{
	int num_arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int *p = &num_arr[0][0], i, j;
	fun(p);
//	打印
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", num_arr[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
