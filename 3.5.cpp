#include <stdio.h>
int main()
{
	int num, b1, b2, b3, b4, b5;
	printf("��������λ����");
	scanf("%d", &num);
	if (num > 99999) return 0;  //�ж��Ƿ񳬹�5λ�� 
	b1 = num / 10000;
//	ԭ 
//	b2 = (num - b1 * 10000) / 1000;
//	b3 = (num - (b1 * 10000 + b2 * 1000)) / 100;
//	b4 =  (num - (b1 * 10000 + b2 * 1000 + b3 * 100)) / 10;
//	b5 = (num - (b1 * 10000 + b2 * 1000 + b3 * 100 + b4 * 10));
	b2 = num % 10000 / 1000;
	b3 = num % 1000 / 100;
	b4 = num % 100 / 10;
	b5 = num % 10; 
	if(b1 != 0) printf("����5λ��\n");
	else if(b2 != 0) printf("����4λ��\n");
	else if(b3 != 0) printf("����3λ��\n");
	else if(b4 != 0) printf("����2λ��\n");
	else if(b5 != 0) printf("����1λ��\n");
//	printf("b1 = %d, b2 = %d, b3 = %d, b4 = %d, b5 = %d", b1, b2, b3, b4, b5);
	printf("˳��%d, %d, %d, %d, %d\n", b1, b2, b3, b4, b5);
	printf("����%d, %d, %d, %d, %d", b5, b4, b3, b2, b1);
} 
