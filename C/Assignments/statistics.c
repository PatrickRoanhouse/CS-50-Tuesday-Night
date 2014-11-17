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
//Prcoessing Data Functions
void processdata(float data[], float output[], int *count1);
//Display data
void displaydata(float data[], float output[], int *count1);
void func_printdata(float data[], int *count2);	


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
	int choice;
	//char choice;
	
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
		scanf("%d",&choice);
		
		
		switch(choice){
			case 1:
				enterdata(data, &count1);
				break;
			case 2:
				processdata(data, output, &count1);
				displaydata(data, output, &count1);
				break;
			case 3:
				printf("Have a nice day!!!\n\n\n\n\n");
				break;
			default: 
				printf("Not a Valid Option \n\n\n");
				break;	
		}
	}while(choice != 3);
		
		
		/*
		choice = getchar();
		getchar();
		
		printf("\n\n\n");
		
		switch(choice){
			case '1':
				enterdata(data, &count1);
				break;
			case '2':
				processdata(data, output, &count1);
				displaydata(data, output, &count1);
				break;
			case '3':
				printf("Have a nice day!!!\n\n\n\n\n");
				break;
			default: 
				printf("Not a Valid Option \n\n\n");
				break;	
		}
	}while(choice !=('3'));
			*/
}

/*int displaymenu(int *count1){
	
	int count2 = *count1; 
	int choice;
	
	printf("*------------------------------------------------------------*\n");
	printf("|    Mini Stats Package                Data Entries = %3d    |\n",count2);
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
	getchar()("%d",&choice);
	printf("\n\n\n");
	
	return choice;		
}
*/

void displaydata(float data[], float output[], int *count1){
	
	int count2 = *count1;
	
	printf("*------------------------------------------------------------*\n");
	printf("    Mini Stats Package                                       |\n");
	printf("*------------------------------------------------------------*\n");
	printf("Data Items:\n\n");
	func_printdata(data, &count2);
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
	
	
}

void enterdata(float data[], int *count1){
	
	int count2 = *count1;
	int i;
	int j;
	
	char ynchoice;
	
	
	//If data already exists either add more to it or start fresh
	if(count2 > 0){
		
		printf("Do you wish to add new data to existing sample? (Y/N)? ");
		scanf("%c",&ynchoice);
		/*
		ynchoice = getchar();
		getchar();
		*/
		
		//Choose yes you start from the previous counter.	
		if (ynchoice == 'y'|| ynchoice == 'Y'){
			printf("\n\nEnter in your data starting at Item %d:",count2);
			for(i = count2 ; i < MAX; i++){
				printf("Item %d of %d: ",i,MAX);
				scanf("%f",&data[i]);
				count2 = i;
			}		
		}
		//Choose anything else you start from counter of 0
		else{
			count2 = 0;
			printf("\n\nEnter in your data starting at Item 1:\n\n\n\n");
			for(i = count2 ; i < MAX; i++){
				printf("Item %d of %d: ",i,MAX);
				scanf("%f",&data[i]);
				
			}
			
		}	
			
	}		
	//If the counter is empty already and there was no data
	else{
		count2 = 0;
		printf("Enter in your data starting at Item 1:\n\n\n\n");
		for(i = count2 ; i < MAX; i++){
			printf("Item %d of %d: ",i+1,MAX);
			scanf("%f",&data[i]);
			count2 = i;
		}
	}
	*count1 = count2;			
}

void func_printdata(float data[], int *count2){
	
	int count3 = *count2;
	int i;
	for(i=0 ; i < count3 ; i++){
		printf("======>>>%7.2f\n",a[i]);
	}
}
	
}
void processdata ( float data[], float output[], int *count1)
{
	
	int count2 = *count1;
	
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
}
