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

void printArray (double * a, int n);
void fillRandom (double a[], int n);
void fillArray (double * a, int n);
double sumArray(double *a, int n);
double largest(double a[], int n);
//void copyArray(const double a[], int n, double b[]);

int main(){
	double g[100];
	double h[4];
	double x[5];
	double y[]={2.3,4.5,6.7,4.0,10.90};
	int i;
	double * q; // '*' = pointer to q
	
	q=NULL;
	q=x;
	
	srand(time(NULL));
	
	// self entered array
	
	fillArray (h,4);
	printArray (h,4);
	
	printf("Total is %8.2f\n",sumArray(h,4));
	printf("the largest is %f\n",largest(h,4));
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("======>>>%7.2f\n",y[3]); // prints 4.00
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	
	// predifined array
	
	printArray(y,5);
	printf("Total is %8.2f\n",sumArray(y,5));
	printf("the largest is %f\n",largest(y,5));
	
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	
	
	//randomly generated array
	
	fillRandom(g,100);
	printArray(g,100);
	
	printf("Total is %8.2f\n",sumArray(g,100));
	printf("the largest is %f\n",largest(g,100));
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	

	for(i=0 ; i <5; i++){
		x[i]=i+1;
		//printf("x[%d]=%5.2f\n",i,x[i]);
	}
	printArray(x,5);
	printf("Total is %8.2f\n",sumArray(x,5));
	printf("the largest is %f\n",largest(x,5));
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	printf("======>>>%7.2f\n",q[2]);
	
	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}

void fillRandom(double a[], int n){
	int i;
	for(i=0 ; i < n ; i++){
		a[i]=rand()%(99-10+1)+10;
	}
}

void printArray(double * a, int n){
	int i;
	for(i=0 ; i < n ; i++){
		printf("======>>>%7.2f\n",a[i]);
	}
}

void fillArray(double * a, int n){
	int i ;
	for(i=0 ; i < n; i++){
		printf("Enter a number: ");
		scanf("%lf",&a[i]);
	}
}

double sumArray(double a[], int n){
	int i;
	double sum=0.0;
	
	for(i=0; i < n ;i++){
		sum+=a[i];
	}
	return sum;
}

double largest(double a[], int n){
	int i;
	double max;
	
	max = a[0];
	
	for(i = 1 ; i < n; i++){
		if (a[i] > max){
			max=a[i];
		}
	}
	return max;
}

/* void copyArray(const double a[], int n, double b[]){
	int i;
	for(i=0 ; i < n; i ++){
		a[i]=b[i];
	}
}
*/