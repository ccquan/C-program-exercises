#include <stdio.h>
int countChar(char *p)
{
	int uppercase = 0, lowercase = 0, number = 0, space = 0, other = 0;
	while(*p != '\0')
	{
		char word = *p;
		if(word >= 'A' && word <= 'Z') uppercase += 1;
		else if(word >= 'a' && word <= 'z') lowercase += 1;
		else if(word >= '0' && word <= '9') number += 1;
		else if(word == 32) space += 1;
		else other += 1;
		p++;
	}
	//��ӡ 
	printf("��д��ĸ��%d����Сд��ĸ��%d����������%d�����ո���%d���������ַ���%d��", uppercase, lowercase, number, space, other);
}
int main()
{
	char text[] = {"7ZHXoNmqIQvfch59jIe5u0GS0t W!rRN@D8ncMZ o46K4#khRvM0 EIh.#CGt2!F@f6GhIs5HL3bbtt"};
	char *p = text;
	countChar(p);
	return 0;
}
