#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double principal = 5000.0;
	double rate = .1;

	printf_s("%4s%21s\n", "Year", "Amount on deposit");
	for (rate = .1; rate <= .121; rate += .005)
	{
		printf_s("rate %.3f\n", rate);
		for (unsigned int year = 1; year <= 15; ++year)
		{
			double amount = principal * pow(1.0 + rate, year);

			printf_s("%4u%21.2f\n", year, amount);
		}
	}

	system("pause");
}