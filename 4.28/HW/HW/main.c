#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code;
	float salary;
	float hours;
	float rate;
	float sales;
	float product;

	printf_s("Enter pay code:");
	scanf_s("%d", &code);

	switch (code)
	{
		case 1:
		{
			printf_s("Enter weekly salary:");
			scanf_s("%f", &salary);

			printf_s("Managers's weekly salary is $%.2f", salary);
			break;
		}
		case 2:
		{
			printf_s("Enter # of hours worked: ");
			scanf_s("%f", &hours);

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
				printf_s("Hourly workers's salary is $%.2f\n", salary);
			}
			break;
		}
		case 3:
		{
			printf_s("Enter gross weekly sales:");
			scanf_s("%f", &sales);

			salary = 250 + sales * .057;
			printf_s("Mission workers's weekly salary is $%.2f", salary);
			break;
		}
		case 4:
		{
			printf_s("Enter amount of money for each of the items they produce: ");
			scanf_s("%f", &product);

			printf_s("Enter rate of the product: ");
			scanf_s("%f", &rate);

			salary = product * rate;
			printf_s("Pieceworkr's weekly salary is $%.2f", salary);
			break;
		}
	}
	system("pause");
}