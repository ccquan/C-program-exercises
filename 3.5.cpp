#include <stdio.h>
int main()
{
	int num, b1, b2, b3, b4, b5;
	printf("请输入五位数：");
	scanf("%d", &num);
	if (num > 99999) return 0;  //判断是否超过5位数 
	b1 = num / 10000;
//	原 
//	b2 = (num - b1 * 10000) / 1000;
//	b3 = (num - (b1 * 10000 + b2 * 1000)) / 100;
//	b4 =  (num - (b1 * 10000 + b2 * 1000 + b3 * 100)) / 10;
//	b5 = (num - (b1 * 10000 + b2 * 1000 + b3 * 100 + b4 * 10));
	b2 = num % 10000 / 1000;
	b3 = num % 1000 / 100;
	b4 = num % 100 / 10;
	b5 = num % 10; 
	if(b1 != 0) printf("它是5位数\n");
	else if(b2 != 0) printf("它是4位数\n");
	else if(b3 != 0) printf("它是3位数\n");
	else if(b4 != 0) printf("它是2位数\n");
	else if(b5 != 0) printf("它是1位数\n");
//	printf("b1 = %d, b2 = %d, b3 = %d, b4 = %d, b5 = %d", b1, b2, b3, b4, b5);
	printf("顺序：%d, %d, %d, %d, %d\n", b1, b2, b3, b4, b5);
	printf("逆序：%d, %d, %d, %d, %d", b5, b4, b3, b2, b1);
} 
