#include <stdio.h>
#include <stdlib.h>

int main()
{
	float dollars;
	float salary;

	printf_s("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &dollars);

	if (dollars != -1)
	{
		salary = dollars * 0.09 + 200;
		printf_s("Salary is:%.2f", salary);
	}

	system("pause");
}