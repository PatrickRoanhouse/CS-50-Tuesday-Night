/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

Write a C program that makes the first letter of each word capitalized.
Write a test program that prompts the user to enter a string and
Print it out by capitalizing the first letter of each word.
Here is a sample run:
<output>
Enter a string: london   england 2015 <enter icon>
The new string is: London   England 2015
<end output>
Note that words may be separated by multiple blank spaces.
 

******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){   
	int i;         /*indexing integer*/
	char sentence[81]; /*specify total of 80 elements*/
	
	printf("Enter a string: ");
    fgets(sentence, sizeof sentence, stdin);
	
	if((sentence[0]>='a') && (sentence[0]<='z'))
	{
		sentence[0]=(char)(sentence[0]-32); /*-32 in ascii to capitalize*/
	}
    for(i=0;sentence[i]!='\0';i++)   /*loop until null character*/
	{
		if(sentence[i]==' ')             /*if space: next letter in capitalized*/
			{
				if((sentence[i+1]>='a') && (sentence[i+1]<='z'))
					{
						sentence[i+1]=(char)(sentence[i+1]-32);
					}
			}
     }
     printf("The new string is: %s",sentence);     
		

	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}