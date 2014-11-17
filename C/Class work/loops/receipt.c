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
	
	double rv, sum = 0.0;
	int i,nr;
	
	printf("Enter the number of Recipts: ");
	scanf("%d",&nr);
	
	for(i=1 ; i <= nr ; i++){
		printf("enter receipt #%d ammount:",i);
		scanf("%lf",&rv);
		sum = sum + rv;
	}
	printf("You spent: $%lf\n",sum);
	
	system("pause");
	
	return(0);	
}
		
		