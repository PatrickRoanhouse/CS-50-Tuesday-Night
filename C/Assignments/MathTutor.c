/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

(Math tutor) 
Write a program that displays a menu as shown in the sample run. 
You can enter 1, 2, 3, or 4 for choosing an addition, subtraction, multiplication, 
or division test. 

After a test is finished, the menu is redisplayed. 

You may choose another test or enter 5 to exit the system. 

Each test generates two random single-digit numbers to form a question for addition,
subtraction, multiplication, or division. 

For a subtraction such as number1 – number2,

number1 is greater than or equal to number2.  

For a division question such as number1 / number2, number2 is not zero.
 
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
	system("pause");
	
	return(0);
}

int displaymenu(){
	
	int choice;
	
	printf("*-----------------------*\n");
	printf("|       MATH TUTOR      |\n");
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
	
	int a,b, ans, uans;
	
	a = rand()%(100-1+1)+1;
	b = rand()%(100-1+1)+1;
	
	printf("\n\n\n");
	printf("What is\n");
	printf("   %d\n",a);
	printf(" + %d\n",b);
	printf("========\n");
	printf("?= ");
	scanf("%d",&uans);
	
	ans = a + b;
	
	if(uans == ans){
		printf("\n\nCorrect!.......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}
	else{
		printf("\n\nIncorrect!......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}	
}

void subtraction(){
	
	int a,b, ans, uans;
	
	a = rand()%(100-1+1)+1;
	b = rand()%(100-1+1)+1;
	
	printf("\n\n\n");
	printf("What is\n");
	printf("   %d\n",a);
	printf(" - %d\n",b);
	printf("========\n");
	printf("?= ");
	scanf("%d",&uans);
	
	if(b > a){
		b=rand()%(100-1+1)+1;
	}
	
	
	ans = a - b;
	
	
	
	if(uans == ans){
		printf("\n\nCorrect!.......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}
	else{
		printf("\n\nIncorrect!......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}	
}

void multiplication(){
	
	int a,b, uans, ans;
	
	a = rand()%(100-1+1)+1;
	b = rand()%(100-1+1)+1;
	
	ans = a * b;
	
	printf("\n\n\n");
	printf("What is\n");
	printf("   %d\n",a);
	printf(" x %d\n",b);
	printf("========\n");
	printf("?= ");
	scanf("%d",&uans);
	
	if(uans==ans){
		printf("\n\nCorrect!.......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}
	else{
		printf("\n\nIncorrect!......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}	
}

void division(){
	
	int a, b, c, ans, uans;
	
	

	a = rand()%(100-1+1)+1;
	b = rand()%(100-1+1)+1;
	c = a * b;
	ans = c / b;
	
	
	printf("\n\n\n");
	printf("What is\n");
	printf("   %d\n",c);
	printf(" ÷ %d\n",b);
	printf("========\n");
	printf("?= ");
	scanf("%d",&uans);
	
	
	if(ans==uans){
		printf("\n\nCorrect!.......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}
	else{
		printf("\n\nIncorrect!......\n\n");
		printf("\n\nThe answer was %d\n",ans);
	}	
}