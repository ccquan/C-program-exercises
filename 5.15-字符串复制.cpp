#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, s1_len;
	char s1[50] = {"����s1"}, s2[50] = {"����s2��\0���"};
	s1_len = strlen(s1);  //�����Ȼ�ȡs1�ĳ���

//	����s2��ֵ��s1 
	for(i = 0; i < (strlen(s2)); i++)
	{
		j = s1_len + i;  //Ȼ���ټ���s2�ĳ��� 
		s1[j] = s2[i];	
	}

//	��ӡ
	for(i = 0; i < (strlen(s1)); i++)
	{
		printf("%c", s1[i]);
	}

	return 0;
}
