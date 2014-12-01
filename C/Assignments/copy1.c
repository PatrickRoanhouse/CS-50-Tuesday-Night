#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   FILE * infile;
   FILE * outfile;
   
   char  infilename[50];
   char  outfilename[50];
   
   int ch;
   
     printf("CopyFrom:");
	 gets(infilename);
     printf("Copy  To:");
	 gets(outfilename);
   
     infile=fopen(infilename,"r");
	 if(infile==NULL)
	 {
	    printf("File not found...\n");
		exit(0);
     }
	 
	 outfile=fopen(outfilename,"w");
	 
	 while((ch=fgetc(infile))!=EOF)
	    fputc(ch,outfile);
		
	 fclose(infile);fclose(outfile);
     printf("Copying... is Done..\n");
    return 0;
}	
		
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 