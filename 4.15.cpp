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
					if(i != k && j != k)  //这是全部的匹配 
					{
						if(i != 'X' && k != 'X' && k != 'Z')  //这个是打听到的 
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

//全部循环，然后i不等于j，i不等于k，j不等于k 就是全部的匹配了，然后过滤打听到的就行了 

