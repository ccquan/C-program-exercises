#include <stdio.h>
int GCD(int m, int n)
{
//	ѭ����1��M������Ȼ������M��Լ����Ȼ���ǲ���N��Լ���� ����Ǿ��ǹ�Լ����Ȼ���¼��ѭ���������ܵó����Լ�� 
	int max_common_divisor;
	for(int i = 1; i <= m; i++)
	{
		if(m % i == 0)
		{
			if(n % i == 0) max_common_divisor = i;
		}
	}
	return max_common_divisor;
}
int LCM(int m, int n)
{
	//�ȵõ����Լ����Ȼ��ʽ����m�������Լ�� * n�������Լ�� ��* ���Լ��  �ó���С������ 
	int max_common_divisor, min_common_multiple;
	max_common_divisor = GCD(m, n);
	min_common_multiple = max_common_divisor * (m / max_common_divisor) * (n / max_common_divisor);
	return min_common_multiple;
}
int main()
{
	int one, two;
	printf("�������һ������");
	scanf("%d", &one);
	printf("������ڶ�������");
	scanf("%d", &two);

//	��ӡ
	printf("���Լ���ǣ�%d, ��С�������ǣ�%d", GCD(one, two), LCM(one, two));
	printf("�����һ����ʽ����С��������%d", (one * two / GCD(one, two)));
	return 0;
} 
