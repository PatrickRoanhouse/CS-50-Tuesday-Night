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
	
	char ch;
	
	printf("enter a phrase:\n");

/*	
	ch =getchar();
	
	while(ch !='\n'){
		printf("%c",ch);
		ch =getchar();
	}
*/	
	while((ch=getchar()) !='\n'){
		printf("%c",ch);
	}
		
	return (0);
}