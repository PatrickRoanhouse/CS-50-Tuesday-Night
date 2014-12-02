#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int input(int first, int second, int third);
int stuff(int first, int second, int third, int added);
int output(int first, int second, int third, int added);
	
int main(){
		
	int first,second,third;
	int added;
	
	//sub functions
	input(first,second,third);	
	stuff(first, second, third, added);
	output(first, second, third, added);
	
	/*asking for numbers
	printf("Enter an interger for #1:");
	scanf("%d",&first);
	printf("Enter an interger for #2:");
	scanf("%d",&second);
	printf("Enter and interger for #3:");
	scanf("%d",&third);
	*/
	
	//math
	//added = first + second + third;
	
	/* output
	printf("Integer 1 = %d\n",first);
	printf("Integer 2 = %d\n",second);
	printf("Integer 3 = %d\n",third);	
	printf("Integer 1,2,3 added together = %d\n",added);
	*/
		
	return(0);
}
	
int input(int first, int second, int third){
	
	printf("Enter an interger for #1:");
	scanf("%d",&first);
	printf("Enter an interger for #2:");
	scanf("%d",&second);
	printf("Enter and interger for #3:");
	scanf("%d",&third);
	
	return first,second,third;
}

int stuff(int first, int second, int third, int added)
{
	
	
	added = first + second + third;
	return added;
}

int output(int first, int second, int third, int added){
	
	printf("Integer 1 = %d\n",first);
	printf("Integer 2 = %d\n",second);
	printf("Integer 3 = %d\n",third);	
	printf("Integer 1,2,3 added together = %d\n",added);
}