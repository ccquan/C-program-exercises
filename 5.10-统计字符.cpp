#include <stdio.h>
int main()
{
	char text[3][80] = {"FftCA@vYg0zGSbuoPX2U%k3OJSltz3VW5Y%VgcFxyvqPXA4!7gvqbT mstvjXZK^GOg1&OIc6bGVMo6",
	"UnF7lfGuVy9jLlh#!J!j4PHVqUyLPqprr 3mfcv@xifP!qPlUhy x!Xy06@CofH8b@0MkvI1sLje5dP",
	"7ZHXoNmqIQvfch59jIe5u0GS0t W!rRN@D8ncMZ o46K4#khRvM0 EIh.#CGt2!F@f6GhIs5HL3bbtt"};
	int i, j, uppercase = 0, lowercase = 0, number = 0, space = 0, other = 0;
	
	//��ʼ�Ƚ� 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; text[i][j] != '\0'; j++)
		{
			char word = text[i][j];
			if(word >= 'A' && word <= 'Z') uppercase += 1;
			else if(word >= 'a' && word <= 'z') lowercase += 1;
			else if(word >= '0' && word <= '9') number += 1;
			else if(word == 32) space += 1;
			else other += 1;
		}
	}
	
	//��ӡ 
	printf("��д��ĸ��%d����Сд��ĸ��%d����������%d�����ո���%d���������ַ���%d��", uppercase, lowercase, number, space, other);
}

//  https://suijimimashengcheng.51240.com/   ����ַ����� 
