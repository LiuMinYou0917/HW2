#include <stdio.h>
#include <stdlib.h>

int main()
{
	int side1;
	int side2;
	int hypotenuse;
	int a, b;

	printf_s("hypotenuse\tside1\tside2\n");
	for (hypotenuse = 1;hypotenuse <= 500; hypotenuse++)
	{
		for (side1 = 1; side1 < 500; side1++)
		{
			for (side2 = 1; side2 < 500; side2++)
			{
				a = (side1 * side1) + (side2 * side2);
				b = hypotenuse * hypotenuse;
				if (a == b)
				{
					printf_s("%d\t\t%d\t%d\n", hypotenuse, side1, side2);
				}
			}
		}
	}
}