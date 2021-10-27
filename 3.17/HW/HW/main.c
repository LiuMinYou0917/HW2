#include <stdio.h>
#include <stdlib.h>

int main()
{
	float account;
	float beginning;
	float charges;
	float credits;
	float limit;
	float balance;

	printf_s("Enter account number (-1 to end):");
	scanf_s("%f", &account);
	if (account != -1)
	{
		printf_s("Enter beginning charges:");
		scanf_s("%f", &beginning);
		printf_s("Enter total charges:");
		scanf_s("%f", &charges);
		printf_s("Enter total credits:");
		scanf_s("%f", &credits);
		printf_s("Enter credits limit:");
		scanf_s("%f", &limit);
		printf_s("Account:\t%f\n", account);
		printf_s("Credit limit:\t%f\n", limit);
	
		balance = beginning + charges - credits;

		printf_s("Balance:\t%f\n", balance);
		if (balance > limit)
		{
			printf_s("Credit Limit Exceed.\n");
		}
	
		system("pause");
	}
	
	

	
}