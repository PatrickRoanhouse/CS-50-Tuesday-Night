#include <stdio.h>

void displayHello(void);

int main(void)
{
 int a,b,sum;
 
 a=20; b=30;
 sum= a + b;
 printf("Sum of %d + %d = %d\n",a,b,sum);




 system("java HelloFrom");
 system("calc");
 system("pause");
 system("notepad");
 system("pause");

 printf("Before calling function\n");
 displayHello();
 printf("After comming back from function\n");
 system("pause");
 return 0;
}
void displayHello(void)
{
printf("Hello\nFrom\nJupiter\n\n\n");
printf("Hello From Jupiter\n");

} 
