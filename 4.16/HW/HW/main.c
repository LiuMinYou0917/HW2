#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, a, b;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf_s("%s", "*");
		}
		printf_s("\n");
	}

	printf_s("\n\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 11; j > i; j--)
		{
			printf_s("%s", "*");
		}
		printf_s("\n");
	}

	printf_s("\n\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 11; j > i; j--)
		{
			printf_s("%s", "*");
		}
		printf_s("\n");

		for (b = 0; b < i; b++)
		{
			printf_s(" ");
		}
	}

	printf_s("\n\n");

	for (i = 1; i <= 10; i++)
	{
		for (b = 10; b > i; b--)
		{
			printf_s(" ");
		}

		for (j = 0; j < i; j++)
		{
			printf_s("%s", "*");
		}

		printf_s("\n");
	}

	system("pause");
}