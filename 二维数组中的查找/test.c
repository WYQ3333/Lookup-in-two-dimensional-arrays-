//在一个二维数组中，每一行都按照从左到右递增的顺序排序，没一列都按照从上到下的顺序排序
//请完成一个函数，输入一个这样的二维数组和一个整数，判断该数组中是否有该整数
#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
#if 0
//暴力搜索算法，时间复杂度为O(N^2),空间复杂度为O(1);用两个循环遍历数组
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
				printf("找到了：");
				printf("%d 坐标为（%d，%d）", input, i + 1, j + 1);
				return;
			}
		}
	}
	printf("没有找到\n");
}
#endif
//这种方法的时间复杂度为O(N)，空间复杂度为O(1)，如果input比array[i][j]小，则在
//它的左边找，直到找到一个比input小的位置，此时接着在它的下方找。


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
			printf("找到了：%d,坐标为（%d,%d）", array[i][j],i+1,j+1);
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