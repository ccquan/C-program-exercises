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
		printf("�������%dλѧ������Ϣ��", i + 1);
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].average = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;  //ƽ���ɼ� 
	}
}
int main()
{
	struct Student *p = stu;
	int i;
	input(p);
//	��ӡ �� д�� 
	FILE *fp;
	if((fp = fopen("stud", "wb")) == NULL)  //�Զ����Ʊ��� 
	{
		printf("���ļ�ʧ��");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
		printf("ID:%3.d\t %6sͬѧ�ĳɼ��ǣ�\t%.2f \t%.2f \t%.2f \tƽ���ɼ��ǣ�%6.2f", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
		printf("     �Ա��浽stud�ļ�\n");
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
