#include<stdio.h>


int main() {
	int i, j, k;
	for(i = 'X'; i <= 'Z'; i++)
	{
		for(j = 'X'; j <= 'Z'; j++)
		{
			if(i != j)
			{
				for(k = 'X'; k <= 'Z'; k++)
				{
					if(i != k && j != k)  //����ȫ����ƥ�� 
					{
						if(i != 'X' && k != 'X' && k != 'Z')  //����Ǵ������� 
						{
							printf("A = %c\nB = %c\nC = %c\n\n", i, j, k);
						}
					
					}
					
				}
			}
		}
	 }
	return 0;
}

//ȫ��ѭ����Ȼ��i������j��i������k��j������k ����ȫ����ƥ���ˣ�Ȼ����˴������ľ����� 

