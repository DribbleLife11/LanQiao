/*
��������
���һ����Ȼ��N��K���Ʊ�ʾ����������ڵ���λ���������ڵ����֣���ô���Ǿ�˵�������K������
��LλK��������K��������Ŀ������K = 4��L = 2��ʱ������K����Ϊ11��13��20��22��30��31��33 ��7����
���������Ŀ�ܴ������������1000000007ȡģ���ֵ��

�����ʽ
�������������������K��L��

�����ʽ
���һ����������ʾ�𰸶�1000000007ȡģ���ֵ��
��������
4 2
�������
7
���ݹ�ģ��Լ��
����30%�����ݣ�K^L <= 106��

����50%�����ݣ�K <= 16�� L <= 10��

����100%�����ݣ�1 <= K, L <= 100��
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

	puts("What is the maximum number of type double entries��");
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