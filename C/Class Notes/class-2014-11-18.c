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

void xfunc(int *);
void xyz(int **);

void main(){

	int x;
	
	int xfunc(&x);
	
	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}

void xfunc(int *a){
	
	int *q;
	
	q=a;
	xyz(&q);
	
}

void xyz(int **t){
	
	**t = 200;
	*q;
}