/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

Write a menu-driven mini-statistics package. 
A user should be able to enter up to 200 items of float data[],  

The program should calculate or show: 
1.) The data it self in an organized table format  
2.) the number of items 
3.) the mean
4.) the standard deviation
5.) the variance 
6.) the median
7.) the mode of the data
8.) The high values in the data
9.) the low values in the data

A sample run follows. The symbol <EOF> in the sample 
run below should be replaced with CTRL-Z or CTRL-D or the end-of-file 
symbol on your system.

the program should also ask if you wish to add more data to your data set
or create a new entry.



******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 200

//menu functions
void menu(float data[], float output[], int *count1);
//Data entry function
void enterdata(float data[],int *count1);
//Prcoessing & Display Data 
void processdata(float data[], float output[], int *count1);
float max(float data[],int *count2);
float min(float data[],int *count2);
void avg_var_stddev(float data[], float output[], int *count2, float *var, float *stddev, float *avg);

int main(){
	float data[MAX];
	float output[7];
	int count = 0;
	
	menu(data, output, &count);

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}

void menu(float data[], float output[], int *count){
	
	int count1 = *count;
	char choice;
	
	do{
		//while ( getchar() != '\n' );
		fseek(stdin,0,SEEK_END);
		printf("\n\n");
		printf("*---------------------------------------------------------------------*\n");
		printf("|            Patrick Roanhouse's  Mini Stats Package 2014 Edition     |\n");
		printf("*---------------------------------------------------------------------*\n");
		printf("*                                                                     *\n");
		printf("*       Menu Options                                                  *\n");
		printf("*                                                                     *\n");
		printf("*       [1]. Enter Data.  - Enter up to 200 entries!                  *\n");
		printf("*                                                                     *\n");
		printf("*       [2]. Display Data - Displays formated table of raw data!      *\n");
		printf("*                           The current data entry count!             *\n");
		printf("*                           and the statical information:             *\n");
		printf("*                           maximum, minimum, mean, median, mode,     *\n");
		printf("*                           variance, and standard deviation.         *\n");
		printf("*                                                                     *\n");
		printf("*       [3]. Quit Program                                             *\n");
		printf("*                                                                     *\n");
		printf("*---------------------------------------------------------------------*\n\n");
		printf("Your Choice? ");
		choice = getchar();
		getchar();
		
		
		switch(choice){
			case '1':
				enterdata(data, &count1);
				break;
			case '2':
				processdata(data, output, &count1);
				break;
			case '3':
				printf("Have a nice day!!!\n\n\n\n\n");
				break;
			default: 
				printf("Not a Valid Option \n\n\n");
				break;	
		}
	}while(choice != '3');
		

}

void enterdata(float data[], int *count1){
	
	int count2 = *count1; 
	int i = count2;
	
	char choice;
	
	
	//If data already exists either add more to it or start fresh
	if(i > 0){
		
		printf("Do you wish to add new data to existing sample? (Y/N)? ");
		//scanf("%c",&ynchoice);
		
		choice = getchar();
		getchar();
		
		
		//Choose yes you start from the previous counter.	CHANGE TO A WHILE LOOP INSTEAD ASK IN CLASS
		if (choice == 'y'|| choice == 'Y'){
			printf("\n\nEnter in your data starting at Item %d:\n Quit Entry by entering the letter 'q' and pressing enter\n\n\n",i+1);
			
			printf("Item %d of %d: ",i+1,MAX);
			while(scanf("%f",&data[i]) !=0){
				i++;
				printf("Item %d of %d: ",i+1,MAX);
			}
		}
		//Choose anything else you start from counter of 0
		else{
			i = 0;
			printf("\n\nEnter in your data starting at Item %d:\n Quit Entry by entering the letter 'q' and pressing enter\n\n\n",i+1);
			printf("Item %d of %d: ",i+1,MAX);
			while(scanf("%f",&data[i]) !=0){
				i++;
				printf("Item %d of %d: ",i+1,MAX);
			}
		}			
	}		
	//If the counter is empty already and there was no data
	else{
		i = 0;
		printf("\n\nEnter in your data starting at Item %d:\n Quit Entry by entering the letter 'q' and pressing enter\n\n\n",i+1);
		printf("Item %d of %d: ",i+1,MAX);
		while(scanf("%f",&data[i]) !=0){
			i++;
			printf("Item %d of %d: ",i+1,MAX);
		}
	}
count2 = i;				
*count1 = count2;
}

void processdata ( float data[], float output[], int *count1) {
	
	int count2 = *count1;
	int i;
	
	float avg = 0;
	float median = 0;
	float var = 0;
	float stddev = 0; 

	float maxx = max(data,&count2);
	float minn = min(data,&count2);
	
	avg_var_stddev(data,output,&count2,&var,&stddev,&avg);
	
	//Data Largest Number Maximum
	output[0] = maxx;

	//Data Smallest Number Minimum
	output[1] = minn;
	
	//Data Mean Average
	output[2] = avg;
	
	//Data Median - Middle number
	output[3] = 0; //median(data,&count2); // YOU NEED TO DO THESE TWO
	
	//Data Mode - most repeatted number/s
	output[4] = 0; // YOU NEED TO DO THESE TWO
	
	//Data Variance
	output[5] = var;
	
	//Data Standard Deviation
    output[6] = stddev;
	
	printf("*---------------------------------------------------------------------*\n");
	printf("|   Mini Stats Package                                                |\n");
	printf("*---------------------------------------------------------------------*\n");
	printf("Data Items:\n\n");
	for(i=0 ; i < count2 ; i++)
	{
		printf("%12.2f ",data[i]);
	    if ((i+1)%5 == 0)
	       {
	           printf("\n\n");
	       }
	}
	printf("\n\n");
	printf("Number of data items : %d\n\n",count2);//data_item_number);
	printf("Largest data item    : %.2f\n\n",output[0]); //data_largest);
	printf("Smallest data item   : %.2f\n\n",output[1]); //data_smallest);
	printf("Mean                 : %.2f\n\n",output[2]); //data_mean);
	printf("Median               : %.2f\n\n",output[3]); //data_median);
	printf("Mode                 : %.2f\n\n",output[4]); //data_mode);
	printf("Variance             : %.2f\n\n",output[5]); //data_variance);
	printf("Standard Deviation   : %.2f\n\n",output[6]); //data_standard_deviation);
	printf("*---------------------------------------------------------------------*\n\n");
	*count1 = count2;
}

float max(float data[],int *count2)
{
	int i;
	float max=-300000000.00;
	
	for (i=0; i<=*count2; i++){
		 if (data[i]>max){
		    max=data[i];
		 }
	}
	return(max);
}

float min(float data[],int *count2)
{
	int i;
	int location = 1;
	float min = data[0];
	for ( i = 0 ; i < *count2 ; i++ )
	{
		if ( data[i] < min )
		{
	    	min = data[i];
	        location = i+1;
	    }
	} 
	return(min);
}

void avg_var_stddev(float data[], float output[], int *count2, float *var, float *stddev, float *avg)
{
	int i;

	float sum = 0, sum1 = 0;
	
	for(i = 0; i < *count2; i++)
	{
		sum = sum + data[i];
	}
	*avg = sum / (float)*count2;

	for(i = 0 ; i < *count2 ; i++)
	{
		sum1 = sum1 + pow((data[i]-*avg),2);
	}
	*var = sum1 / (float)*count2;
	*stddev = sqrt(*var);
}
