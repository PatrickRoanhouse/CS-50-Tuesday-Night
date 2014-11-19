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
	
	double x[100];
	
	int num;
	
	printf("what size of array:");
	scanf("%d",&num);
	
	x = malloc(num * sizeof(double));
	for(i=0; i < num; i++){
		printf("Enter Item #%d: ",i+1);
		scanf("%lf",&x[i]);
	}
	
	for(i=0; i < num; i++){
		printf(">>>> %lf",&x[i]);
	}

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}