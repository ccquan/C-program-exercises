#include <stdio.h>
#define N 13
struct Human
{
	int id;
	struct Human *next;
};
int main()
{
	int i;
	struct Human people_struct[N], people_arr[N], *head, *p;
	for(i = 0; i < N; i++)
	{
		people_arr[i].id = i + 1;  //将第一位到第13位学生的id赋值进去 
	}
	head = &people_struct[0];
	for(i = 0; i < N; i++)
	{
		if(i == N - 1)
		{
			people_struct[i].id = people_arr[i].id;
			people_struct[i].next = NULL;
		}
		people_struct[i].id = people_arr[i].id;
		people_struct[i].next = &(people_arr[i + 1]);
	}
	p = head;
	while(p != NULL)
	{
		printf("他们的id是%d\n", p->id);
		p = p->next;
	}
	return 0;
}
