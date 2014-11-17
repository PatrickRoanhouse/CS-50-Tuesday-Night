#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


******************************/
int main(){
	
	int a,b,pass;
	
	printf("Enter password:");
	scanf("%d",&pass);
	if(pass==999){	
		a=10;
		b=++a; //a = 11
	
		b = b + ++a; //11 + 12
		printf(" %d \n", ++b);
	
		if(b > 24){
			printf("value of b is > 24\n");
		}
		else{
			printf("value of b is <= 24\n");
		}
	}
	else{
		printf("sorry dave, i can't do that!");
		exit(0);
	}
return(0);	
}
		
		