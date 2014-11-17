
/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>




int main(){

	char ch;
	int upcase = 0;
	int lowercase = 0;
	int digits = 0;
	int blanks = 0;


	printf("enter phrase. : ");
	
	//do it like a c dev like
	while((ch = getchar())!='\n'){
		printf("%c",ch);
		if(ch <= 'A' && ch >= 'Z'){
			upcase++;
		}
		else if(ch <= 'a' && ch >='z'){
			lowercase++;
		}
		else if(ch <= '0' && ch >='9'){
			digits++;
		}
		else(ch == ' '){
			blanks++;
		}
	}
	
	printf("you had %d upper case letters.\n",upcase);
	printf("you had %d lower case letters.\n",lowercase);
	printf("you had %d digit characters.\n",digits);
	printf("you had %d blankspaces.\n",blanks);
	printf("\n");
	
	return(0);
}
