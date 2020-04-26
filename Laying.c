#include<stdio.h>
#pragma warning(disable:4996)
int laying(int N);
int main(void)
{
	int n;
	scanf("%d", &n);
	int count = laying(n);
	printf("%d", count);

	return 0;
}

int laying(int N)
{
	if (N == 1)
		return 1;
	else if (N == 2)
		return 2;
	else
		return laying(N - 1) + laying(N - 2);
}
