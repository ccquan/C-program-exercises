#include <stdio.h>
int main()
{
	float wages, wages_count;  //���幤�ʺ͹������� 
	int number = 0;  //�������� 
	
	while (true)  //��ѭ�� 
	{
		printf("�����빤�ʣ�");
		scanf("%f", &wages);
		if (wages == -1)  //���������-1�˳�ѭ�� 
			break;
		number++;  //ÿѭ��һ��������1 
		wages_count += wages;  //ÿ��ѭ��������� 
	}
	printf("ƽ�������ǣ�%f", wages_count / number);  //��������������������ƽ���� 
}
