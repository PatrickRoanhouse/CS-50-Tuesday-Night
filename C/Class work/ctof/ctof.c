#include <stdio.h>

int main ()
{
	int centigrade; double fahrenheit;
	
	printf("enter the degree in Celcius:  ");
	scanf("%d\n",&centigrade);
	
	fahrenheit = 1.8 * centigrade + 32;
	
	printf("centigrade = %d\n",centigrade);	
	printf("The degree in fahrenheit is: %f\n",fahrenheit);
	
	return 0;
}
