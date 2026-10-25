#include <stdio.h>

int main()
{
	double num1, num2;
	char operations;
	
	printf("=====My Calculator=======\n");
	
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	
	printf("Enter an operation(+,-,*,/): ");
	scanf(" %c", &operations);
	
	printf("Enter the second number: ");
	scanf("%lf", &num2);
	
	switch (operations)
	{
		case '+':
			printf("Result=%.2f\n",num1 + num2);
			break;
		case '-':
			printf("Result=%.2f\n",num1 - num2);
			break;
		case '*':
			printf("Result=%.2f\n",num1 * num2);
			break;
		case '/':
			if (num2 !=0)
				printf("Result=%.2f\n",num1 / num2);
			else 
				printf("Error:Cannot divide by 0");
			break;
		default:
			printf("Invalid Operation");
	}
	return 0;
}