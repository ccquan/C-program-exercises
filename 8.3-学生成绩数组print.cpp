#include <stdio.h>
#define N 10
struct Student
{
	int num;
	char name[20];
	float score[3];
}stu[N];
void print(struct Student stu[])
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("%sͬѧ�ĳɼ��ǣ�%.2f %.2f %.2f\n", stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}
int main()
{
	struct Student *p = stu;
	int i;
	for(i = 0; i < N; i++)
	{
		printf("�������%dλѧ������Ϣ��", i + 1);
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	print(p);
	return 0;
}
