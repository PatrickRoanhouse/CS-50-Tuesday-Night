/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


Write a complete C program to do the following:

The is a need for program that adds all positive number and place them in sumPositive

and sum of negative numbers and place them in sumNegative . At the end program should

prints the values in sumPositive and sumNegative and also compute average of positive

and negative numbers.

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include <stdio.h>

int main( )
{
    int x;
    int sumPos; 
    int sumNeg;
    int countPos; 
    int countNeg;

    sumPos = 0; /* setting int counter */
    sumNeg = 0;
    countPos = 0; 
    countNeg = 0;

    printf( "Enter positive and negative integer numbers (0 - exit): " );

    /* input with exit for 0*/
    while ( scanf( "%d", &x ) == 1 && x != 0 ){
        if ( x < 0 ){
            sumNeg += x;
            countNeg++;
        }
        else{
            sumPos += x;
            countPos++;
        }
    }

    printf( "\nSum of positive numbers is %d, and their average is %d\n\n",sumPos, countPos == 0 ? 0 : sumPos / countPos );
    printf( "\nSum of negative numbers is %d, and their average is %d\n\n",sumNeg, countNeg == 0 ? 0 : sumNeg / countNeg );

    //needed for all basic programs to run for the professor
	system("pause");
	
    return 0;
}