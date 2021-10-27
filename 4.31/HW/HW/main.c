#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;
	int temp1;
	int temp2;

	temp1 = 1;
	temp2 = 7;

	for (i = 1; i <= 5; i++)
	{
		for (k = 5; k > i; k--)
		{
			printf_s(" ");
		}
		for (j = 0; j < temp1; j++)
		{
			printf_s("*");
		}
		temp1 += 2;
		printf_s("\n");
	}

	for (i = 4; i >= 1; i--)
	{
		for (k = 5; k > i; k--)
		{
			printf_s(" ");
		}
		for (j = temp2; j > 0; j--)
		{
			printf_s("*");
		}
		temp2 -= 2;
		printf_s("\n");
	}
	system("pause");
}