#include <stdio.h>
int max = 0;
int number[4];
int maximumValue(int index)
{
	if(max < number[index]) max = number[index];
	if(index == 0) return 0;
	else
	{
		maximumValue(index - 1);
	}
}
int main()
{
	int i;
	for(i = 0; i < 4; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &number[i]);
	}
	maximumValue(3);
	printf("���ֵ�ǣ�%d", max);
	return 0;
}
//�ȶ���һ��ȫ�ֵ����ֵ��Ȼ��ݹ� -1 ������±���֮�Ա� 
