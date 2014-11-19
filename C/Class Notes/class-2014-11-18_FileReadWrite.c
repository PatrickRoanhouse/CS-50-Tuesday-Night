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

	FILE * infile;
	FILE * outfile;
	
	int c;
	
	infile = fopen("text.txt","r");
	if(infile==NULL){
		printf("file doesn't exist jive turkey!\n");
		exit(0);
	}
	
	outfile = fopen("textcopy.txt","w");
	
	while((c=fgetc(infile))!=EOF){
		fputs(c,outfile);
	}
	
	fclose(infile);
	
	fclose(outfile);
	
	printf("copy is done GET BACK TO WORK!!!!\n");
	//needed for all basic programs to run for the professor
	//system("pause");
	
	
	return(0);
}