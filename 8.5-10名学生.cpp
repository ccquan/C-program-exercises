#include <stdio.h>
#define N 10
struct Student
{
	int id;
	char name[20];
	int score[3];
};
void outprintMaxScore(struct Student stu[])
{
	int i, j, max_score = stu[0].score[0], max_student;
//	3门课程的每一个学生 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(max_score < stu[j].score[i])
			{
				max_score = stu[j].score[i];
				max_student = j;
			}
		}
	}
	int average = (stu[max_student].score[0] + stu[max_student].score[1] + stu[max_student].score[2]) / 3;
	printf("学号：%d的%s同学成绩最高，3门课程成绩是：%d %d %d, 平均成绩：%d", stu[max_student].id, stu[max_student].name, stu[max_student].score[0], stu[max_student].score[1], stu[max_student].score[2], average);
}
int main()
{
	struct Student stu[N];
	int i, j, average = 0;
	for(i = 0; i < N; i++)
	{
		printf("请输入第%d位同学的信息：", i + 1);
		scanf("%d %s %d %d %d", &stu[i].id, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < N; j++)
		{
			average += stu[j].score[i];
		}
	}
	printf("3门课程的总平均成绩是：%d\n", average / (N * 3));
	outprintMaxScore(stu);
	return 0;
}
