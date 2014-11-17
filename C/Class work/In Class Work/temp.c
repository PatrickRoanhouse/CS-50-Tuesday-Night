#include <stdio.h>

void convertCentigradeToFahrenheit (void);
int mySqr(int x);
int main()
{ 
  int a,y;
  a=5;
  convertCentigradeToFahrenheit ();
  convertCentigradeToFahrenheit ();
   y= mySqr(mySqr(a));
  printf("The squar of %d is %d\n",a,y);
   return 0;
 }
 
 void convertCentigradeToFahrenheit (void)
 {
 int centigrade;
  double fahrenheit;
  
  
   printf("Enter value:");
   scanf("%d",&centigrade);
  
   fahrenheit = 1.8 * centigrade + 32;
   printf("Centigrade=%d\n",centigrade);
   printf("Fahrenheit=%f\n",fahrenheit);
 
 
 }
 int mySqr(int x)
 {
  return    x * x;
 }
 
 
 
 
 
 
 
 