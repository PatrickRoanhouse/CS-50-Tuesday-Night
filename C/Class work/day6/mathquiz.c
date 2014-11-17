/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu
 

Count the number of questions asked

How many anwsered right or wrong

find average and give him grade

Make a game for doing better than a B!


******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>




int displaymenu();
void addition();
void subtraction();
void multiplication();
void division();


int main(){
	
	int com;
	srand(time(NULL));
	
	do{
		com = displaymenu();
		switch(com){
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5: printf("Have a nice day\n");
		}
	}while(com != 5);	

	//needed for all basic programs to run for the professor
	//system("pause");
	
	return(0);
}

int displaymenu(){
	
	int choice;
	
	printf("*-----------------------*\n");
	printf("|       MATH QUIZ       |\n");
	printf("*-----------------------*\n");
	printf("*    1. Addition        *\n");
	printf("*    2. Subtration      *\n");
	printf("*    3. Multiplication  *\n");
	printf("*    4. Division        *\n");
	printf("*    5. EXIT            *\n");
	printf("*-----------------------*\n");
	printf("Menu Choice: ");
	scanf("%d",&choice);
	return choice;		
}

void addition(){
	
	int a,b, ans;
	
	a=rand()%(999-100+1) +100;
	b=rand()%(999-100+1) +100;
	
	printf("What is\n");
	printf("   %d\n",a);
	printf(" + %d\n",b);
	printf("========\n");
	printf("?= ");
	scanf("%d",&ans);
	
	if((a+b)==ans){
		printf("\n\nCorrect!.......\n\n");
	}
	else{
		printf("\n\nIncorrect!......\n\n")
		printf("\n\nThe answer was %d\n",a+b);
	}	
}

void subtraction(){
	printf("Subtraction is not available\n");
}

void multiplication(){
	printf("Multiplication is not available\n");
}

void division(){
	printf("division is not available\n");
}