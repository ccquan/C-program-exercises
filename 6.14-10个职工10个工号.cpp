#include <stdio.h>
#include <string.h>

//����ȫ�ֱ��� 
char name[10][10];
int id[10];

void saveData()
{
	int i, j;
	for(i = 0; i < 10; i++)
	{
		printf("�������%dλ������", i + 1);
		scanf("%s", &name[i]);
		printf("�����빤�ţ�");
		scanf("%d", &id[i]); 
	}
}
void idSort()
{
	int i, j, temp_id;
	char temp_name[10];
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(id[j] > id[j + 1])
			{
//				�滻���� 
				temp_id = id[j];
				id[j] = id[j + 1];
				id[j + 1] = temp_id;
//				�滻����
				 strcpy(temp_name, name[j]);
				 strcpy(name[j], name[j + 1]);
				 strcpy(name[j + 1], temp_name);
			}
		}
	}
}
void searchName(int number, char ret_name[])
{
	int i, n = 10 / 2;
	if(number > id[n])
	{
		for(i = n + 1; i < 10; i++)
		{
			if(number == id[i]) strcpy(ret_name, name[i]);
		}
	}
	if(number < id[n])
	{
		for(i = 0; i < n; i++)
		{
			if(number == id[i]) strcpy(ret_name, name[i]);
		}
	}
}
int main()
{
	int number;
	char ret_name[10];

	saveData();
	printf("����ǰ��\n");
	for(int i = 0; i < 10; i++) printf("%s�Ĺ�����:%d\n", name[i], id[i]);

	idSort();
	printf("\n�����\n");
	for(int i = 0; i < 10; i++) printf("%s�Ĺ�����:%d\n", name[i], id[i]);

	printf("��������Ҫ���ҵĹ��ţ�");
	scanf("%d", &number);
	searchName(number, ret_name);
	printf("%s", ret_name);
 }
