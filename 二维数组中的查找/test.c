//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ûһ�ж����մ��ϵ��µ�˳������
//�����һ������������һ�������Ķ�ά�����һ���������жϸ��������Ƿ��и�����
#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>

//���ַ�����ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)�����input��array[i][j]С������
//��������ң�ֱ���ҵ�һ����inputС��λ�ã���ʱ�����������·��ҡ�


void test()
{
	int array[4][4] = { { 1, 2, 8, 9 },
	{ 2, 4, 9, 12 },
	{ 4, 7, 10, 13 },
	{ 6, 8, 11, 15 } };
	int input = 0;
	printf("Please input the number:");
	scanf("%d", &input);
	int j = 3;
	int i = 0;
	while ((j >= 0 && j < 4) || (i >= 0 & i < 4))
	{
		if (input == array[i][j])
		{
			printf("�ҵ��ˣ�%d,����Ϊ��%d,%d��", array[i][j],i+1,j+1);
			return;
		}
		else if (input < array[i][j])
		{
			j--;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}