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


	int num, possum, negsum, poscount, negcount;

	poscount = 0;
	negcount = 0;
	possum = 0;
	negsum = 0;

	do{
		printf("enter a number, type 0 to exit:");
		scanf("%d",&num);

		if(num < 0){
			possum+=num;
			poscount++;
		}
		else (num > 0){
			negsum+=num;
			negcount++;
		}

	}while(scanf("%d",&num))!=0)
	
	
	printf("The positive sum is %d and the average is %f",possum,(double)possum/poscount);
	printf("The negative sum is %d and the average is %f",negsum,(double)negsum/negcount);

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}