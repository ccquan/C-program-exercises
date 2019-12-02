#include <stdio.h>
void bubbleSort(int arr[], int lenght)
{
	int i, j, temp;
	for(i = 0; i < lenght - 1; i++)
	{
		for(j = 0; j < lenght - 1; j++)  //这里要-1，因为下面是j+1不然会下标会超出变成arr[10] = 1 ，还可以在-i，因为得到最大的在后面了可以不用去跟它比较了 
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = {96, 48, -48, 3, 77, 6, 16, 105, -1, 0}; 
	bubbleSort(arr, 10);
//	打印 
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
