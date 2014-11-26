/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

​a.  Write a C function that will input values into an array of type int. 
    Have the array and the number of elements in the array passed as parameters 
	to your function. Use a local pointer variable to traverse the array.

b.  Write a C function that will output the contents of an array of type int.
	Have the array and the number of elements in the array passed as parameters.
	Use a local pointer variable to traverse the array.

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void enterdata(int array[], int *element);
void displaydata(int array[], int *element);

int main()
{
	int array[200];
	int element = 0;
	char choice;
	
	do{
		//while ( getchar() != '\n' );
		fseek(stdin,0,SEEK_END);
		printf("\n\n");
		printf("*---------------------------------------------------------------------*\n");
		printf("|            Patrick Roanhouse's  Int Array Pointer App Edition     |\n");
		printf("*---------------------------------------------------------------------*\n");
		printf("*                                                                     *\n");
		printf("*       Menu Options                                                  *\n");
		printf("*                                                                     *\n");
		printf("*       [1]. Enter Data.                                              *\n");
		printf("*                                                                     *\n");
		printf("*       [2]. Display Data                                             *\n");
		printf("*                                                                     *\n");
		printf("*       [3]. Quit Program                                             *\n");
		printf("*                                                                     *\n");
		printf("*---------------------------------------------------------------------*\n\n");
		printf("Your Choice? ");
		choice = getchar();
		getchar();
		
		
		switch(choice){
			case '1':
				enterdata(array, &element);
				break;
			case '2':
				displaydata(array, &element);
				break;
			case '3':
				printf("Have a nice day!!!\n\n\n\n\n");
				break;
			default: 
				printf("Not a Valid Option \n\n\n");
				break;	
			}
	}while(choice != '3');
	

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}

void enterdata(int array[], int *element)
{
	
	int i = 0;
	int j = 0;
	

	printf("Enter an Interger, quit by pressing q\n");
	printf("Array Entry %d of %d: ",i ,200);
	while(scanf("%d",&array[i]))
	{
		printf("Array Entry %d of %d: ",i+1,200);
		i++;
		j++;
		
	}
	printf("J = %d\n",j);
	*element = j + 1; 
}

void displaydata(int array[], int *element){
	
	int i;
	
	printf("Enter any number starting from 1,\nIt will diplay what is stored in that array space,\n Logically Array start at 0\nquit by pressing 'q'.\n");
	printf("There are currently %d intergers in the array.\n", *element);
	printf("Array Entry>>>> ");
	while(scanf("%d",&i))
	{
		printf("Stored Value in array at position %d =>  %d\n",i,array[i]);
		printf("Array Entry>>>> ");
	}
}