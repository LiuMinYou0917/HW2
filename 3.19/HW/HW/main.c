#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal;
	float rate;
	float days;
	float interest;
	
	printf_s("Enter loan principal (-1 to end):");
	scanf_s("%f", &principal);
	
	if (principal != -1)
	{
		
		printf_s("Enter interest rate:");
		scanf_s("%f", &rate);
		printf_s("Enter term of the loan in days:");
		scanf_s("%f", &days);

		interest = principal * rate * days / 365;

		printf_s("The interest charge is $%.2f", interest);
	}
	
	system("pause");
}