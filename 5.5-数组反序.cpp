#include <stdio.h>
int main()
{
	int lenght, i, j = 0;
	printf("����������ĳ��ȣ�");
	scanf("%d", &lenght);
	int num_arr[lenght];
	for(i = 0; i < lenght; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &num_arr[i]);
	}
//	�ڶ��֣� 
	for(i = 0; i <= ((lenght - 1) / 2); i++)
	{
		j = lenght - 1 - i;
		int temp;
		temp = num_arr[j];
		num_arr[j] = num_arr[i];
		num_arr[i] = temp;
	}

//	 �鿴 
	printf("�����˳�򣺣�");
	for(i = 0; i  < lenght; i++)
	{
	 	printf("%d ", num_arr[i]);
	}
	return 0;
 } 
