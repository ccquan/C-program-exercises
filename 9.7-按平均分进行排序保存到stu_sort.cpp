#include <stdio.h>
#include <stdlib.h>
#define N 5
struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
}stu[N];
void input(struct Student stu[])
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("请输入第%d位学生的信息：", i + 1);
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].average = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;  //平均成绩 
	}
}
//按平均分进行排序 
void sort(struct Student stu[])
{
	int i, j;
	struct Student temp;
	for(i = 0; i < N - 1; i++)
	{
		for(j = 0; j < N - 1; j++)
		{
			if(stu[j].average > stu[j + 1].average)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}
int main()
{
	struct Student *p = stu;
	int i;
	input(p);
//	排序后
	sort(p);
	printf("排序后：\n");
//	打印 和 写入 
	FILE *fp;
	if((fp = fopen("stu_sort", "wb")) == NULL)  //以二进制保存 
	{
		printf("打开文件失败");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
		printf("ID:%3.d\t %6s同学的成绩是：\t%.2f \t%.2f \t%.2f \t平均成绩是：%6.2f", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
		printf("     以将排序好的保存到stu_sort文件\n");
	}
	fclose(fp);
	return 0;
}
/*
001 xiaohao 50.50 95.00 63.50
002 xiaohong 78.90 78.50 64.50
003 xiaoming 24.00 12.00 35.00
004 xiaobai 46.50 50.50 64.00
005 xiaohei 78.00 98.00 75.00
*/
