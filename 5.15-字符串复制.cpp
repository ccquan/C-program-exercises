#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, s1_len;
	char s1[50] = {"我是s1"}, s2[50] = {"我是s2后\0面的"};
	s1_len = strlen(s1);  //这里先获取s1的长度

//	遍历s2的值给s1 
	for(i = 0; i < (strlen(s2)); i++)
	{
		j = s1_len + i;  //然后再加上s2的长度 
		s1[j] = s2[i];	
	}

//	打印
	for(i = 0; i < (strlen(s1)); i++)
	{
		printf("%c", s1[i]);
	}

	return 0;
}
