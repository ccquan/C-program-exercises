#include <stdio.h>
void bubbleSort(int arr[], int lenght)
{
	int i, j, temp;
	for(i = 0; i < lenght - 1; i++)
	{
		for(j = 0; j < lenght - 1; j++)  //����Ҫ-1����Ϊ������j+1��Ȼ���±�ᳬ�����arr[10] = 1 ����������-i����Ϊ�õ������ں����˿��Բ���ȥ�����Ƚ��� 
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
//	��ӡ 
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
