#include <stdio.h>
int main()
{
	int arr[] = {98, 78, 77, 76, 74, 73, 72, 69, 59, 52, 48, 30, 24, 15, 1};
	int search, i, index = -1, half = 15 / 2;
	printf("������Ҫ���ҵ�����"); 
	scanf("%d", &search);
	
	//���� 
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
	
	//��ӡ 
	if(index == -1) printf("�鲻������");  //-1��ʾδ�ҵ� 
	else printf("\n����������ĵ�%d��Ԫ��", index + 1);  //+1�ȽϷ���ƽ�� 

	return 0;
}
