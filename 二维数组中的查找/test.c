//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ûһ�ж����մ��ϵ��µ�˳������
//�����һ������������һ�������Ķ�ά�����һ���������жϸ��������Ƿ��и�����
#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
#if 0
//���������㷨��ʱ�临�Ӷ�ΪO(N^2),�ռ临�Ӷ�ΪO(1);������ѭ����������
void test()
{
	int array[4][4] = { { 1, 2, 8, 9 },
	{ 2, 4, 9, 12 },
	{ 4, 7, 10, 13 },
	{ 6, 8, 11, 15 } };
	int input = 0;
	printf("Please input the number:");
	scanf("%d", &input);
	int i = 0;
	int j = 0;
	for (i = 0; i < sizeof(array[0]) / sizeof(array[0][0]); i++)
	{
		for (j = 0; j < sizeof(array[0]) / sizeof(array[0][0]); j++)
		{
			if (array[i][j] == input)
			{
				printf("�ҵ��ˣ�");
				printf("%d ����Ϊ��%d��%d��", input, i + 1, j + 1);
				return;
			}
		}
	}
	printf("û���ҵ�\n");
}
#endif
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