#include <stdio.h>

int main(void)
{
	int number1, number2, sum;
	printf("Enter a number: ");
	scanf_s("%d", &number1);
	printf("Enter another number: ");
	scanf_s("%d", &number2);
	sum = number1 + number2;
	printf("%d + %d = %d",number1,number2,sum);

	return 0;
}