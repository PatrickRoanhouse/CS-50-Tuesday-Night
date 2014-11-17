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

	int cg,ug;
	char ans;

do{
	srand(time(NULL));

	cg=rand()%(100-1+1)+1;


	printf("I am thinking of a number between 1 and 100\n");
	printf("Guess it:");
	scanf("%d",&ug);
	while(ug != cg)
	{
		if (ug > cg)
		{
			printf("Guess lower! \n");
		}
		else
		{
			printf("Guess higher! \n");
		}
	printf("Guess it:");
	scanf("%d",&ug);

	}
	printf("you got it, it was %d!\n",cg);
	printf("Would you like to play again? y/n\n");
	fflush(stdin);
	scanf("%c",&ans);
}while(ans=='y');
	

return 0;
}