#include <stdio.h>
int main()
{
    double x,y,i;
    int a,b;
    x = 3.0;
    i = 2.0;
	y = x / i;
	a = (int)y;
	if(y != a)//用于判断是否为整数
    return 0;
}

