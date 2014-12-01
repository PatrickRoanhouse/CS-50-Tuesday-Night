/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

1. The program cp.c makes a copy of a file. 
It uses getc () and putc () to do the input and output. 
Write four new versions of a file copy program. Each of the programs should have the same functionality as cp.c
 

a. In the first version, use fgetc () to do the input and fputc () to do the output.
 

b. In the second version, use fgets () to do the input and fputs () to do the output.
 
////// THIS ONE /////
c. In the third version, use fread () to do the input and fwrite () to do the output.
 

d. In the fourth version, use fscanf () to do the input and fprintf () to do the output.
 

e. Compare the sizes of the object code from all five versions of the file copy programs. 
If the facilities for testing execution efficiency are available on your system, 
test the efficiency of each version. Report on your findings.

******************************/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main( int argc, char *argv[])
{
	FILE *fpin, *fpout;
	int iochar;
	int size = sizeof(char);
	char line;
	
	// no arguments tells you how to type in if you haven't
	if ( argc != 3)
	{
		printf("Usage: cp oldfile newfile\n");
		exit(1);
	}
	// can't open input file error message if there is no file
	if (( fpin = fopen ( argv[1], "r")) == NULL)
	{
		printf("can't open input file.\n");
		exit(1);
	}
	// can't open output file error message if there is no file
	if (( fpout= fopen (argv[2], "w")) == NULL )
	{
		printf("can't open output file.\n");
		exit(1);
	}
	while (fread(&line, size, 1, fpin) != 0)
	{
		fwrite(&line, size, 1, fpout);
	}
	fclose ( fpin );
	fclose ( fpout );
	return 0;
}
