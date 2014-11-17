#include <stdio.h>

void convertCentigradeToFahrenheit();
int mySQR(int x);

int main ()
{
	int a,y,,x,
	double n1,n2,n3;
	
	a=5;
	
	y=mySQR(a);
	
	printf("the SQR of %d is %d\n",25,y);
	
	convertCentigradeToFahrenheit();
	printf("enter three number:");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("====>>>%"x);
	x = aveThree(n1,n2,n3);
	
	return 0;
}

double aveThree(double x, double y, double z)
{
	return (x + y + z)/3;
}

int mySQR( int x)
{
	return x * x;
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