
/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


Write a complete program  to counts the whitespace,
the digits, the uppercase alphabetics and lowercase alphabetics in the input.

Example :Abbc56764***;;;;

There were one uppercase alphabets and three lower case alphabet and five digits and zero space.

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


/* Count letters, digits, whitespaces and other chars in a given string */

#include <stdio.h>

int main(){

	char str [81];

	int uppercase, lowercase, digits, blankspace, other; /* char counts */
	int totalchar;
	
	printf("Enter a line of text:\n"); /* input area */
	gets(str);	/*pulling in making a string */

    

    uppercase = 0; /* init counts */
	lowercase = 0;
	digits = 0;
	blankspace = 0; 
	other = 0;

    totalchar = 0;



    /* count characters in string str */

    while (str[totalchar] != '\n'){
		char ch= str[totalchar];
		totalchar++;
		if (ch>= 'A' && ch<= 'Z' ){
        	uppercase++;
        }
        else if (ch >= 'a' && ch <= 'z'){
        	lowercase++;
        }
        else if (ch>= '0' && ch<= '9'){
        	digits++;
        }
		else if (ch == ' '){
			blankspace++;
		}
        else{ 
        	other++;
        }
    }

    /* print counts */

    printf("\n\n\n");
    printf("There were %d uppercase alphabets, ",uppercase);
    printf("%d lowercase alphabets, ",lowercase);
    printf("%d digits,\n",digits);
    printf("%d blank spaces, ",blankspace);
    printf("and %d 'other' characters.\n",other);
    printf("Total there were %d characters\n\n\n\n",totalchar);

    //needed for all basic programs to run for the professor
    system("pause");

              
return 0;
}