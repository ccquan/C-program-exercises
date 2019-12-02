#include <stdio.h>
int main()
{
	int arr[] = {98, 78, 77, 76, 74, 73, 72, 69, 59, 52, 48, 30, 24, 15, 1};
	int search, i, index = -1, half = 15 / 2;
	printf("请输入要查找的数："); 
	scanf("%d", &search);
	
	//查找 
	if(search == arr[half]) index = half;
	else if(search > arr[half])
	{
		for(i = 0; i < half; i++)
		{
			if(search == arr[i]) index = i;
		}
	}
	else if(search < arr[half])
	{
		for(i = half; i < 15; i++)
		{
			if(search == arr[i]) index = i;
		}
	}
	
	//打印 
	if(index == -1) printf("查不到该数");  //-1表示未找到 
	else printf("\n该数是数组的第%d个元素", index + 1);  //+1比较符合平常 

	return 0;
}
