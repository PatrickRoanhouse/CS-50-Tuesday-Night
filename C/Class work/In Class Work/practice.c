#include <stdio.h>

int main()
{ 
   int a; double b;
   double score;
   a=20;
  
   printf("the value of a =====>> %d\n",a);
   printf("Please enter your score:");
   scanf("%lf",&score);
   printf("your Score is =====>>>%6.2f\n",score);
   
   
   
   return 0;
 }