#include <stdio.h>
#include <stdlib.h>
struct Student{
    int num;
    float score;
    Student *prev;
    Student *next;
};
Student *input();
void print(Student *stu);
void del(Student *stu, float n);
int main()
{
    Student *stud;
    float del_score;
    stud=input();
    printf("Please enter delete score: ");             //从主函数中输入要删除的数据
    scanf("%f", &del_score);
    del(stud, del_score);
    print(stud);
    return 0;
}
Student *input()
{
    Student *p1, *p2, *head;
    int n=0;
    p1=p2=(Student*)malloc(sizeof(Student));
    printf("Please enter No.%d student info: ", n+1);
    scanf("%d %f", &p1->num, &p1->score);
    head=NULL;
    while (p1->num!=0){
        n++;
        if (n==1){
            head=p1;
            p1->prev=NULL;
        }
        else{
            p2->next=p1;
            p1->prev=p2;
        }
        p2=p1;
        p1=(Student*)malloc(sizeof(Student));
        printf("Please enter No.%d student info: ", n+1);
        scanf("%d %f", &p1->num, &p1->score);
    }
    p2->next=NULL;
    return head;
}
void print(Student *stu)
{
    Student *p;
    for (p=stu; p!=NULL; p=p->next)
        printf("%d %.2f\n", p->num, p->score);
}
void del(Student *stu, float n)
{
    Student *p, *head;
    for (p=stu, head=p; p!=NULL; p=p->next)
        if (p->score==n){
            if (p==head)
                head=p->next;
            else if (p->next==NULL)
                p->prev->next=NULL;
            else
                p->prev->next=p->next;
        }
    *stu=*head;
}
/*
1 59.6
2 69.4
3 69.2
4 34.5
*/

