#include <stdio.h>
int main()
{
	int number, i, j, temp, min;
	number = 10; 
	int num_arr[number];
	for(i = 0; i < number; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &num_arr[i]);
	}
	 
	 //��ʼ����
	for(i = 0; i < number - 1; i++)
	{
		min = i;
		for(j = i + 1; j < number; j++)
		{
			if(num_arr[min] > num_arr[j])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = num_arr[min];
			num_arr[min] = num_arr[i];
			num_arr[i] = temp;
		}
	}
	
	//�鿴 
	printf("�����");
	for(i = 0; i  < number; i++) printf("%d ", num_arr[i]);
	return 0;
}

 
