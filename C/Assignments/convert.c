/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

Write a function in C that takes an array of char and a char ** expression as parameters. 
The array of type char would contain a string the possibly starts with a sequence of decimal digits. 
Have the function convert the sequence of decimal digits it finds to type int and return 
the converted value. Have the function set the contents of its second parameter (a char * value) 
to point to the first character in the array that was not converted. 
For example, if the function was called convert () and the call to convert () was 
intval = convert (array, & charptr);
where array contained the string 274ADAMS/0
then after the call, intval would contain the 274, and charptr would point to the ‘A’ in the string.

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int convert(char x[] , char** c);

int main (void)
{
    char* charptr;
    char array[80];
	int intval;
	
	printf("Enter in a string:\n");
	gets(array);
	intval = convert(array, &charptr);
	
	return 0;
}

int convert(char x[] , char** c)
{
    char *num;
    int numdigits = 0;
    int i=0;
    int finalint;
    
	while (x[i] <= (9+'0') && x[i] >= 1 )
        i++;
    
	numdigits = i;
    printf("\nnum of digits = %d\n", numdigits);
    i = 0;
    *c = &x[numdigits];
    num = malloc((sizeof(char))*(numdigits+1));
    for (i=0; i<numdigits; i++)
    {
        num[i]=x[i];
        //printf("\nx[%d] is %c\n",i,x[i]);
    }
    num[i]='\0';
    printf("\n%s", num);
    finalint=atoi(num);
    printf("\nfinal int value is %d\n", finalint);
    return finalint;
}
