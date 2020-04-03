/* 
问题描述
给定一个n阶矩阵a，输出a的m次幂（m是非负整数）
例如：
a =
1 2
3 4
a的2次幂
7 10
15 22
输入格式
第一行是一个正整数n、m（1 <= n <= 30, 0 <= m <= 5），表示矩阵a的阶数和要求的幂数
接下来n行，每行n个绝对值不超过10的非负整数，描述矩阵a的值
输出格式
输出共n行，每行n个整数，表示a的m次幂所对应的矩阵。相邻的数之间用一个空格隔开
样例输入
2 2
1 2
3 4
样例输出
7 10
15 22 
*/

#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int matrix[31][31];
	int result[31][31];
	int N, M;
	int i, j, k,m;
	scanf("%d%d", &N,&M);
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &matrix[i][j]);
			result[i][j] = matrix[i][j];
		}
	}

	if (M == 0)
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (i == j)
					printf("1 ");
				else
					printf("0 ");
			}
			printf("\n");
		}
	}
	else if (M == 1)
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				printf("%d ", matrix[i][j]);
			printf("\n");
		}
	}
	else
	{
		for (m = 1; m < M; m++)
		{
			int temp[31][31] = { 0 };
			for (i = 0; i < N; i++)
			{
				for (j = 0; j < N; j++)
				{
					int sum = 0;
					for (k = 0; k < N; k++)
					{
						sum += result[i][k] * matrix[k][j];
					}
					temp[i][j] = sum;
				}
			}
			for (i = 0; i < N; i++)
			{
				for (j = 0; j < N; j++)
				{
					result[i][j] = temp[i][j];
				}
			}
		}
		for (i = 0; i < N; i++) 
		{
			for (j = 0; j < N; j++)
			{
				printf("%d ", result[i][j]);
			}
			printf("\n");
		}
	}	
	
	return 0;
}
