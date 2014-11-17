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

int main(){

	int num, sum, count, d;

	sum = 0; 
	count = 0;

	printf("Enter a number, stop by pressing CTRL+Z:\n");
	while((d=scanf("%d",&num))!= EOF){
		//printf("inside d=%d\n",d);
		sum += num;
		//sum = sum + num;
		count++;
	}
	
	if(count > 0){
		printf("the sum is %d, average is %f\n\n",sum,(double)sum/count);
	}
	else{
		printf("Dividing by zero returned an Undefined\n\n");
	}

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}