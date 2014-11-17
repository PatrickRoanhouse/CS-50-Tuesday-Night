#include <stdio.h>

int main(){
	
	//general loop
	int i;
	int sum = 0;
	
	//entry loop variables
	double r, sumd =0.0;
	int nr;
	
	//character loop varibles
	char ch;
	
	for(i=0;i<128;i++){
		printf("%c = %d\n",i,i);
	
	//incremental for loop
	for(i=1;i < 10;i=i+2){
		printf("Incremental for loop.\n");
		printf("%d\n",i);
		sum = sum+i;
		printf("sum = %d\n",sum);
		
	}
	//decremental for loop
	for(i=10;i >= 1;i=i-2){
		printf("decremental for loop.\n");
		printf("%d\n",i);
		sum = sum+i;
		printf("sum = %d\n",sum);
	}
	//entry loop
	printf("Enter the number of Recipts: ");
	scanf("%d",&nr);
	for(i=1;i<=nr;i++){
		printf("enter recipet %d ammount:",i);
		scanf("%lf",&r);
		sumd = sumd + r;
		printf("Total is: %lf\n",sumd);
	}
	//char loop
	for(i=0;i<128;i++){
		printf("%c = %d\n",i,i);
	}
	printf("that is all\n");
	
	return(0);
}
