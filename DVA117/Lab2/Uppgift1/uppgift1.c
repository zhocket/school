#include <stdio.h>

int main(void)
{
	int angle;
	printf("Enter a positive angle in full degrees: ");
	scanf_s("%d", &angle);

	if (angle < 0 || angle > 180)
	{
		printf("The angle given is invalid.");
		
	}
	else if (angle < 90)
	{
		printf("The angle is sharp!");
	}
	else if (angle > 90)
	{
		printf("The angle is blunt!");
	}
	else
	{
		printf("The angle is perpendicular");
	}

	return 0;
}