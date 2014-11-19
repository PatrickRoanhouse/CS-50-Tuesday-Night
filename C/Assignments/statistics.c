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
#define MAX 10

//menu functions
void menu(float data[], float output[], int *count1);
//int displaymenu(int *count);
//Data entry function
void enterdata(float data[],int *count1);
//Prcoessing & Display Data 
void processdata(float data[], float output[], int *count1);


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
		printf("*------------------------------------------------------------*\n");
		printf("|    Mini Stats Package                Data Entries = %3d    |\n",count1);
		printf("*------------------------------------------------------------*\n");
		printf("*                                                            *\n");
		printf("*    Enter the following number to:                          *\n");
		printf("*                                                            *\n");
		printf("*    1. Enter Data.                                          *\n");
		printf("*                                                            *\n");
		printf("*    2. Display the data and the following statistics:       *\n");
		printf("*       the number of data items, the high and low values    *\n");
		printf("*       in the data[], the mean, the median, mode,           *\n");
		printf("*       variance and the standard deviation.                 *\n");
		printf("*                                                            *\n");
		printf("*    3. Quit Program                                         *\n");
		printf("*                                                            *\n");
		printf("*------------------------------------------------------------*\n\n");
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
			printf("\n\nEnter in your data starting at Item %d:\n",i+1);
			
			printf("Item %d of %d: ",i+1,MAX);
			while(scanf("%f",&data[i]) != EOF){
				i++;
				printf("Item %d of %d: ",i+1,MAX);
			}
		}
		//Choose anything else you start from counter of 0
		else{
			i = 0;
			printf("\n\nEnter in your data starting at Item %d:\n",i+1);
			printf("Item %d of %d: ",i+1,MAX);
			while(scanf("%f",&data[i]) !=EOF){
				i++;
				printf("Item %d of %d: ",i+1,MAX);
			}
		}			
	}		
	//If the counter is empty already and there was no data
	else{
		i = 0;
		printf("\n\nEnter in your data starting at Item %d:\n",i+1);
		printf("Item %d of %d: ",i+1,MAX);
		while(scanf("%f",&data[i]) !=EOF){
			i++;
			printf("Item %d of %d: ",i+1,MAX);
		}
	}
count2 = i;				
*count1 = count2;
}

void processdata ( float data[], float output[], int *count1){
	
	int count2 = *count1;
	int i;
	
	float largestnum;
	float smallestnum = 8.0;
	float mean = 9.0;
	float median = 10.0;
	float mode = 11.0;
	float variance = 12.0;
	float stddev = 13.0;
	
	//Data Largest Number
	largestnum = 2 + 10;
		
	output[0] = largestnum;

	//Data Smallest Number
    smallestnum = 10+2;
	
	output[1] = smallestnum;
	
	//Data Mean
	output[2] = mean;
	
	//Data Median
	output[3] = median;
	
	//Data Mode
	output[4] = mode;
	
	//Data Variance
	output[5] = variance;
	
	//Data Standard Deviation
    output[6] = stddev;
	
	printf("*------------------------------------------------------------*\n");
	printf("    Mini Stats Package                                       |\n");
	printf("*------------------------------------------------------------*\n");
	printf("Data Items:\n\n");
	for(i=0 ; i < count2 ; i++){ /// ASK IN CLASS 
		printf("%.2f ",data[i]);
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
	printf("*------------------------------------------------------------*\n\n\n\n");
	*count1 = count2;
}
