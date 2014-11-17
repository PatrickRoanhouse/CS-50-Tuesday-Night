#include <stdio.h>

int main ()
{
	int centigrade; double fahrenheit;
	
	printf("enter the degree in Celcius:");
	scanf("%d",&centigrade);
	
	fahrenheit = 1.8 * centigrade + 32;
	
	printf("centigrade = %d\n",centigrade);	
	printf("fahrenheit = %f\n",fahrenheit);
	
	return 0;
}
