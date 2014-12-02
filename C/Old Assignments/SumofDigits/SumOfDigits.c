/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

Write a function that takes an integer as its parameters and returns sum of digits.
Example 1234 as input should return 10. Have main function test your function.

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void){
    
	int sum,number;
	
	sum  = 0; // sum to zero
	
    printf("enter four digit integer: ");
    scanf("%d", &number);
	
	
	
	do 
	{
	    //get a digit 
	    sum += number % 10;
	   	 				
		//remove the digit  
	    number /= 10;
	} while (number > 0);
	
	printf("The sum is %d\n\n", sum);
	

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}