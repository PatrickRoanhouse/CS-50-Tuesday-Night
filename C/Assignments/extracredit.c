/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu

Purpose:

Write a complete C programming to add two very large numbers together as follows:
Enter the first number
1999999999999999999999999999999999999999999996667766999999
Enter the second number
888888888888888888888888888888888888888888888888888888888888888888888888
Sum is
Display the total here

it can not use an array
 
********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bigNum 
{
	unsigned int val0;  unsigned int val1;  unsigned int val2;  unsigned int val3;  unsigned int val4;
	unsigned int val5;  unsigned int val6;  unsigned int val7;  unsigned int val8;  unsigned int val9;
} bigNum_t;

void init(bigNum_t * _num) 
{
	_num->val0 = 0; _num->val1 = 0; _num->val2 = 0; _num->val3 = 0; _num->val4 = 0;
	_num->val5 = 0; _num->val6 = 0; _num->val7 = 0; _num->val8 = 0; _num->val9 = 0;
}

void add( unsigned int * one, unsigned int * two, unsigned int * carry, unsigned int * result ) 
{
unsigned int temp = *one + *two + *carry;
*result = temp % 1000000000;
*carry  = temp / 1000000000;
}

bigNum_t add_bn( bigNum_t * one, bigNum_t * two ) 
{
	unsigned int carry = 0;
	bigNum_t result;

	add( &(one->val0), &(two->val0), &carry, &(result.val0) );
	add( &(one->val1), &(two->val1), &carry, &(result.val1) );
	add( &(one->val2), &(two->val2), &carry, &(result.val2) );
	add( &(one->val3), &(two->val3), &carry, &(result.val3) );
	add( &(one->val4), &(two->val4), &carry, &(result.val4) );
	add( &(one->val5), &(two->val5), &carry, &(result.val5) );
	add( &(one->val6), &(two->val6), &carry, &(result.val6) );
	add( &(one->val7), &(two->val7), &carry, &(result.val7) );
	add( &(one->val8), &(two->val8), &carry, &(result.val8) );
	add( &(one->val9), &(two->val9), &carry, &(result.val9) );

	return result;
}

void display( int _val, int * _state ) 
{
	switch(*_state) 
	{
		case 0:
			if( _val == 0 ) return;
			printf("%d",_val);
			*_state = 1;
			break;
		case 1:
			printf("%09d",_val);
	}
}

void display_bn( bigNum_t * _val ) 
{
	int state = 0;
	display( _val->val9, &state );  display( _val->val8, &state );  display( _val->val7, &state );
	display( _val->val6, &state );  display( _val->val5, &state );  display( _val->val4, &state );
	display( _val->val3, &state );  display( _val->val2, &state );  display( _val->val1, &state );

	if( state == 0 ) 
	{
		printf("%d\n", _val->val0);
		return;
	}
	printf("%9d\n", _val->val0);
}

void parse_bn( bigNum_t * _val, char * _str ) 
{
	int size = strlen(_str);
	int sections = (size-1)/9;
	int end = size;
	int begin = 0;

	for(int section=0; section<=sections; ++section)
	{
		if( end >= 9 ) 
		{
			begin = end - 9;
		} 
		else 
		{
			begin = 0;
		}
		int value = 0;
		for( int digit=begin; digit < end; ++digit ) 
		{
			value *= 10;
			value += (_str[digit]-'0');
		}

		switch(section) 
		{
			case 9: _val->val9 = value; break;
			case 8: _val->val8 = value; break;
			case 7: _val->val7 = value; break;
			case 6: _val->val6 = value; break;
			case 5: _val->val5 = value; break;
			case 4: _val->val4 = value; break;
			case 3: _val->val3 = value; break;
			case 2: _val->val2 = value; break;
			case 1: _val->val1 = value; break;
			case 0: _val->val0 = value; break;
		}

		end -= 9;
	}
}

int main(void)
{
	bigNum_t num1;
	bigNum_t num2;
	init(&num1);
	init(&num2);

	char * strNum1[1024]; //= "888888888888888888888888888888888888888888888888888888888888888888888888";
	char * strNum2[1024]; //=   "1999999999999999999999999999999999999999999996667766999999";
	
	printf("Enter the first number\n");
	gets(strNum1);
	printf("Enter the second number\n");
	gets(strNum2);

	parse_bn(&num1, strNum1);
	parse_bn(&num2, strNum2);

	bigNum_t sum = add_bn(&num1, &num2);
	printf("the sum is: ");
	display_bn(&sum);

	return 0;
}