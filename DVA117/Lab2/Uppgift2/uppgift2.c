#include <stdio.h>


int main(void)
{
	int inputNmbr;
	printf("Enter a number between 0-5: ");
	scanf_s("%d", &inputNmbr);

	switch (inputNmbr)
	{
	case 0: printf("Morsecode: -----"); break;
	case 1: printf("Morsecode: .----"); break;
	case 2: printf("Morsecode: ..---"); break;
	case 3: printf("Morsecode: ...--"); break;
	case 4: printf("Morsecode: ....-"); break;
	case 5: printf("Morsecode: ....."); break;
	default: printf("Error, number not between 0-5.");
	}
	return 0;
}