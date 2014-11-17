#include <stdio.h>

int  main ()
{
    int a; double b; /* declarative statements */
	int score; /* declarative statements */

    a = 20; b = 25.75; /* assignment */
	
	printf("enter your score:  ");
	scanf("%d",&score);
    printf("value of a is %d\n",a); /* \n in a text will give you a new line of text */
    printf("the value of B ====>>>>>%f\n",b);
	printf("your score is: %d\n",score);

	return 0;
}