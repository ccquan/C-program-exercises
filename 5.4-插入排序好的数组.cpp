#include <stdio.h>
int main()
{
	int a[6] = {5, 10, 15, 20, 25, 30};
	int copy_number[7];
	int i, j, n;
	scanf("%d", &n);
	
//	��bug�����һ�����жϲ��� 
//	for(i = 0, j = 0; i < 7; i++, j++)
//	{
//		if(number[i] > n && number[i - 1] < n)
//		{
//			copy_number[j] = n;
//			j += 1;
//		}
//		copy_number[j] = number[i];
//	}
	
//	for(i = 0; i < 6; i++)
//	{
//		if(number[i] > n)
//		{
//			copy_number[i] = n;
//			break;
//		}
//		copy_number[i] = number[i];
//	}
//	for(j = i + 1; i < 6; i++, j++)
//	{
//		copy_number[j] = number[i];
//	}
//	if(copy_number[5] < n) copy_number[6] = n;  //���һ���� 
	for(i=0;i<6;i++)
		if(n<a[i])	
			break;
	for(j=n;j>=i;j--)	//�Ӳ���λ�ú�һλ��ʼ��ÿһ��Ԫ�������һ��λ�� 
		a[j]=a[j-1];
	a[i]=n;	
	for(i = 0; i < 7; i++) printf("%d ", a[i]);
}
