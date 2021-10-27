#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int length;
	int breadth;

	printf_s("Enter length:");
	scanf_s("%d", &length);
	printf_s("Enter breadth:");
	scanf_s("%d", &breadth);

	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= breadth; j++)
		{
			if (i == 1 || i == length)
			{
				printf_s("*");
			}
			else if (j == 1 || j == breadth)
			{
				printf_s("*");
			}
			else
			{
				printf_s(" ");
			}
		}
		printf_s("\n");
	}

	system("pause");
}