#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hours;
	float rate;
	float salary;

	printf_s("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &hours);

	if (hours != -1)
	{
		printf_s("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);

		if (hours > 40)
		{
			salary = 40 * rate + (hours - 40) * 1.5 * rate;
			printf_s("Salary is $%.2f\n", salary);
		}
		else
		{
			salary = hours * rate;
			printf_s("Salary is $%.2f\n", salary);
		}
	}

	system("pause");
}