#include <stdio.h>
int main()
{
	double height = 100.0, count_height, fantan_height = 0.0;
	for(int i = 1; i <= 10; i++)
	{
		fantan_height = height / 2;
		height = fantan_height;
		count_height += fantan_height * 2.0;
	}
	count_height += 100.0;  //һ��ʼ��100M 
	printf("����%f��\n����%f��",  count_height, fantan_height);
}
