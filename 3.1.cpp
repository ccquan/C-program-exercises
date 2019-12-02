#include <stdio.h>
int main(){
	int a=3, b=4, c=5, d, x, y;
	d = (a + b > c && b == c);
	d = (a || b + c && b - c);
	d = (!(a > b) && !c || 1);
	d = (!(x = a) && (y = b) && 0);
	d = (!(a + b) + c - 1 && b + c / 2);
	printf("%d", d);
}
