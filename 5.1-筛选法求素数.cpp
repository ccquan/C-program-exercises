#include <stdio.h>
int main()
{
//	������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
	int i, j, number = 100;
	int a[number];
	for(i = 0; i < number; i++)
	{
		a[i] = i + 1;
	}
	a[0] = 0;  //a[0] = 1,1�������� ����ֱ�Ӹ�ֵΪ0 
	for(i = 1; i < number; i++)
	{
		for(j = 2; j < a[i]; j++)
		{
			if(a[i] % j == 0)
			{
				a[i] = 0;
				break;
			}
		}
	}
	
//	��ӡ
	for(i = 0; i < number; i++)
	{
		if(a[i] != 0) printf("%d ", a[i]);
	}
	return 0; 
}
