#include <stdio.h>
int main()
{
//	n / 2 - 1 = 1;  //��10��  �ھ����n = 4
//  n / 2 - 1 = 4;  //�ڰ����n = 10 
	int n = 0, t = 1;
	for(int i = 1; i <= 9; i++)
	{
		n = (t + 1) * 2;
		t = n;
	}
	printf("%d", n);
}
