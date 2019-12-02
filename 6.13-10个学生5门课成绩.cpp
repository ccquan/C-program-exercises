#include <stdio.h>
#include <math.h>
#include <string.h>
void studentAverageScore(char name[10][10], int grade[10][5])
{
	int i, j, count = 0;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
		{
			count += grade[i][j];
		}
		printf("%s的平均分是：%d\n", name[i], count / 5);
		count = 0;
	}	
}
void subjectAveragesScore(char subject[][5], int grade[][5])
{
	int i, j, count = 0;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 10; j++)
		{
			count += grade[j][i];
		}
		printf("%s的平均分是：%d\n", subject[i], count / 10);
		count = 0;
	}
}
void highestScore(char name[10][10], char subject[5][5], int grade[10][5])
{
	int i, j, max =  grade[0][0];
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(grade[i][j] > max) max = grade[i][j];
		}
	}
	//得到最高分的分数后去找出全部这个分数的人 
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(grade[i][j] == max) printf("%s同学的%s成绩的最高分是%d分\n", name[i], subject[j], grade[i][j]);
		}
	}
}
void variance(int t[][5])  //别人的 
{
    int i, j, k, m;
    float temp[10], var, x1, x2;
    for (i=0, m=0; i<10; i++, m++){
        for (j=0, k=0; j<5; j++)
            k+=t[i][j];
        temp[m]=k/5;
    }
    for (i=m=x1=x2=0; i<10; i++){
        x1+=pow(temp[i], 2);
        x2+=temp[i];
    }
    var=x1/10-pow(x2/10, 2);
    printf("方差是： %f\n", var);
}

int main()
{
	char subject[5][5] = {"语文", "数学", "英语", "政治", "体育"};
	char name[10][10] = {"张三", "李四", "王五", "小明", "小红", "贝贝", "晶晶", "欢欢", "莹莹", "妮妮"};
	int grade[10][5] = {{50, 60, 70, 80, 90}, {40, 50, 60, 70, 80}, {5, 5, 5, 5, 5}, {10, 10, 10, 10, 10}, {100, 100, 100, 100, 100}, 
	{60, 60, 60, 60, 60}, {100, 90, 80, 70, 60}, {35, 35, 35, 35, 35}, {1, 2, 3, 4, 5}, {6, 6, 6, 6, 6}};
//	char name[10][10];
//	int grade[10][5];
//	int i, j;
//	for(i = 0; i < 10; i++)
//	{
//		printf("请输入姓名：");
//		scanf("%s", name[i]);
//		for(j = 0; j < 5; j++)
//		{
//			printf("请输入%s的成绩：", subject[j]);
//			scanf("%d", &grade[i][j]);
//		}
//		printf("\n");
//	}
//	学生平均分 
	studentAverageScore(name, grade); printf("\n-----------\n");
//	科目平均分 
	subjectAveragesScore(subject, grade);
//	最高分
	highestScore(name, subject, grade);
//	方差
	variance(grade); 
	return 0;
}
