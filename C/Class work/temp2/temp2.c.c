#include <stdio.h>

void convertCentigradeToFahrenheit();

int main ()
{
	convertCentigradeToFahrenheit();
	return 0;
}

void convertCentigradeToFahrenheit()
{
	int centigrade; double fahrenheit;
	
	printf("enter the degree in Celcius:");
	scanf("%d",&centigrade);
	
	fahrenheit = 1.8 * centigrade + 32;
	
	printf("centigrade = %d\n",centigrade);	
	printf("fahrenheit = %f\n",fahrenheit);
	
}