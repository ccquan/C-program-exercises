#include <stdio.h>
#include <stdlib.h>
#define N 5
struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
}stu[N + 1];
//按平均分进行排序 
void sort(struct Student stu[])
{
	int i, j;
	struct Student temp;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
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
	FILE *fp;
//	打开旧文件然后读取打印 
	if((fp = fopen("stu_sort", "rb")) == NULL)
	{
		printf("打开文件失败");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("ID:%3.d\t %6s同学的成绩是：\t%.2f \t%.2f \t%.2f \t平均成绩是：%6.2f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	fclose(fp);
//	插入
	printf("请输入需要插入学生的信息：");
	scanf("%d %s %f %f %f", &stu[N].num, stu[N].name, &stu[N].score[0], &stu[N].score[1], &stu[N].score[2]);
	stu[N].average = (stu[N].score[0] + stu[N].score[1] + stu[N].score[2]) / 3;  //平均成绩 
//	排序后
	printf("排序后：\n"); 
	sort(p);
//	仍存入到原有文件 
	if((fp = fopen("stu_sort", "wb")) == NULL)  //以二进制保存 
	{
		printf("打开文件失败");
		exit(0);
	}
	for(i = 0; i < N + 1; i++)
	{
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
		printf("ID:%3.d\t %6s同学的成绩是：\t%.2f \t%.2f \t%.2f \t平均成绩是：%6.2f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
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
