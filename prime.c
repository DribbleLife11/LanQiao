#include<stdio.h>

int main() {
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0)||i%400==0)
		{
			printf("%d\t", i);
		}
	}

	
	
	
	
	
	
	
	
	
	/*int i = 0, j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++) {
			int p = 0;
			p = i * j;
			printf("%d*%d=%d\t", i, j, p);
		}
	}*/

	/*int num=0;
	for (num = 100; num <= 200; num++)
	{
		int i = 0;
		for (i = 2; i < num; i++) {
			if (num % i== 0)
			{
				break;
			}
		}
		if (num == i)
		{
			printf("%d ", i);
		}
	}
*/
	return 0;
}