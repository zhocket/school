#include <stdio.h>

int main(void)
{
	int min=0, max=0, sum=0, avg=0, i=1, input, condition = 1;
	printf("Welcome!\n\nEnter a negative number to exit input and print result\n\n");
	printf("Give a number: ");
	while (condition == 1)
	{
		scanf_s("%d", &input);
		i++;
		if (input == -1)
		{
		    condition = 0;
		}
		else if (input < min)
		{
			min = input;
		}
		else if (input > max)
		{
			max = input;
		}
		sum = sum + input;
		avg = sum / i;
		printf("Give a number: ");
	}

	printf("The smallest number is: %d", min);
	printf("The largest number is: %d", max);
	printf("The sum of the numbers is: %d", sum);
	printf("The average value is: %d", avg);

	return 0;
}