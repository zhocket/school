#include <stdio.h>

int main(void)
{
	int readVat;
	float price, article, vat;

	printf("Price on article including VAT is: ");
	scanf_s("%f", &article);
	printf("VAT percentage as interger: ");
	scanf_s("%d", &readVat);
	
	//Calculation
	vat = (float)readVat / 100;
	price = article / (vat + 1);
	//VAT difference:
	vat = article - price;

	printf("Price exclusing VAT is: %0.2f", price);
	printf("\nThe VAT on the article is: %0.2f", vat);

	return 0;
}