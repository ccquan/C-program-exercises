#include <stdio.h>
#define N 5
struct Student
{
	int num;
	char name[20];
	float score[3];
}stu[N];
void input(struct Student stu[])
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("请输入第%d位学生的信息：", i + 1);
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
}
int main()
{
	struct Student *p = stu;
	int i;
	input(p);
//	打印 
	for(i = 0; i < N; i++)
	{
		printf("ID:%3.d\t %6s同学的成绩是：\t%.2f \t%.2f \t%.2f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
	return 0;
}
