#include <stdio.h>
void sort(int *p, int n)
{
	int i = 0, k = 0, people = n, number_i;
	while(people != 1)
	{
		number_i = i % n;  //ʹ number_i ��Զ�� 0 - n �� 
		if(*(p + number_i) != 0)  //����3�Ļḳֵ��0���ж��ǲ����ѱ��˳��� 
		{
			k++;  //���� 
			if(k == 3)
			{
				*(p + number_i) = 0;
				people -= 1;  //����3ʱ������һ�� 
				k = 0;  // k �� 3 ֮�����±��� 
			}
			
		}
		i++;
	}
}
int main()
{
	int i, n = 3;
	int circle[n], *p;
	p = circle;
	for(i = 0; i < n; i++) *(p + i) = i + 1;  //�Ѻ�����ֵ��ȥ���� 
	sort(p, n);
//	��ӡ 
	for(i = 0; i < n; i++)
	{
		if(circle[i] != 0) printf("�����������ʱԭ����%d��", circle[i]);
	}
	return 0;
}
