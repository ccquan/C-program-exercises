#include <stdio.h>
int main()
{
	int n;
	char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
	scanf("%d", &n);
	printf("%s", *(month + (n - 1)));
	return 0;
}
