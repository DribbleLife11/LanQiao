/*
问题描述
如果一个自然数N的K进制表示中任意的相邻的两位都不是相邻的数字，那么我们就说这个数是K好数。
求L位K进制数中K好数的数目。例如K = 4，L = 2的时候，所有K好数为11、13、20、22、30、31、33 共7个。
由于这个数目很大，请你输出它对1000000007取模后的值。

输入格式
输入包含两个正整数，K和L。

输出格式
输出一个整数，表示答案对1000000007取模后的值。
样例输入
4 2
样例输出
7
数据规模与约定
对于30%的数据，K^L <= 106；

对于50%的数据，K <= 16， L <= 10；

对于100%的数据，1 <= K, L <= 100。
*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main(void)
{
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries？");
	if (scanf("%d", &max) != 1)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	ptd = (double *)malloc(max * sizeof(double));
	if (ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}

	puts("Enter the values(q to quit):");
	while (i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are your %d entries:\n", number = i); 
	for (i = 0; i < number; i++)
	{
		printf("%7.2f", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);

	system("pause");
	return 0;
}