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
#include <time.h>

int main(){

	int n1,n2,n3,n4,n5,n6;
	int i,dice;

	n1 = 0; 
	n2 = 0; 
	n3 = 0; 
	n4 = 0; 
	n5 = 0; 
	n6 = 0;

	printf("n1 leaves at location %p in RAM\n",&n1);
	printf("n1 has %d bytes\n",sizeof(n1));

	srand(time(NULL));

	for(i=0; i < 1000; i++){
		dice = rand()%(6) + 1;
		switch(dice){
			case 1 : n1++; break;
			case 2 : n2++; break;
			case 3 : n3++; break;
			case 4 : n4++; break;
			case 5 : n5++; break;
			case 6 : n6++; break;
			default : ;
		}
	}

	printf("Ocurrences of 1's are: %d\n",n1);
	printf("Ocurrences of 2's are: %d\n",n2);
	printf("Ocurrences of 3's are: %d\n",n3);
	printf("Ocurrences of 4's are: %d\n",n4);
	printf("Ocurrences of 5's are: %d\n",n5);
	printf("Ocurrences of 6's are: %d\n",n6);

	//needed for all basic programs to run for the professor
	system("pause");
	
	return 0;
}