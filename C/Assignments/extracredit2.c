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
#include <ctype.h> 

typedef struct 
{
    int data;
    struct node * next;
} node;

void    runProg     ( void );
void    pushL       ( node **, int );
node *  genNum      ( char *, int );
void    printL      ( node * );
node *  addN        ( int );
node *  reverseL    ( node * );
node *  addL        ( node  *, node * );
void    checkN      ( char *, int );

int main()
{
    runProg();
    
    return 0;
}

/* ----------------------------------------- 
function runProg()

executing function
  
inputs: void
returns: int
---------------------------------------- */
void runProg()
{
    node * num1;// = ( node * )malloc( sizeof( node  ) );
    node * num2;// = ( node * )malloc( sizeof( node  ) );
    node * total;
    char * usr1, * usr2;
    
    usr1 = malloc(256);
    usr2 = malloc(256);
    
    printf( "\nEnter first number:\n> " );
    gets( usr1 );
    checkN( usr1, strlen( usr1 ) );
    
    num1 = genNum( usr1, strlen( usr1 ) );
    
    printL( num1 );
    
    printf( "\nEnter second number:\n> " );
    gets( usr2 );
    checkN( usr2, strlen( usr2 ) );

    num2 = genNum( usr2, strlen( usr2 ) );
   
    num1 = reverseL( num1 );
    num2 = reverseL( num2 );

    total = addL( num1, num2 );
    
    printf( "\nTotal:\n" );
    total = reverseL( total );
    printL( total );
    printf( "\n" );
}

/* ----------------------------------------- 
function checkN()

verifies inpu characters are digits
  
inputs: char * x, int len
returns: void 
---------------------------------------- */
void checkN( char * x, int len )
{
    int i;
    
    for( i=0; i< len; i++ )
        if( !( isdigit( x[i] ) ) )
        {
            printf( "\n** digits only **\n" );
            exit(0);
        }
}

/* -----------------------------------------
function pushL()

adds a value to the front of the linked list
  
inputs: node  ** headref, int value
returns: void
---------------------------------------- */
void pushL( node  ** headref, int value )
{
    node * newnode = ( node * )malloc( sizeof( node  ) );
    
    newnode->data = value;
    newnode->next = * headref;
    
    * headref = newnode;
}

/* -----------------------------------------
function addN()


new node with the value as it's data
  
inputs: int value
returns: node * newnode
---------------------------------------- */
node * addN( int value )
{
    node * newnode = ( node * )malloc( sizeof( node  ) );
    
    newnode->data = value;
    
    newnode->next = NULL;
    
    return newnode;
}

/* ----------------------------------------- 
function genNum()

converts user input string into digits, and then parses 
the length of the user number, adding every item 
individually to a linked list
  
inputs: char * x, int len
returns: node * newnode
---------------------------------------- */
node * genNum( char * x, int len )
{
    node * newnode = NULL;
    int i;
    
    for( i=0; i<len; i++ )
        pushL( &newnode, x[i]-48 );
    
    return newnode;
}

/* -----------------------------------------
function printL() 

prints a linked list
  
inputs: node * list
returns: void
---------------------------------------- */
void printL( node * list )
{    
    while( list )
    {
        printf( "%d", list->data );
        list = list->next;
    }
}

/* -----------------------------------------
function reverseL()

reverse the order of a list and return the new list
  
inputs: node * headref
returns: node * prev 
---------------------------------------- */
node * reverseL( node * headref )
{
    node * temp, * prev = NULL;
    
    while( headref )
    {
        temp = headref;
        headref = headref->next;
        temp->next = prev;
        prev = temp;
    }
    
    return prev;
}

/* -----------------------------------------
function addL()

adds two nodes together, returning a third node
  
inputs: node * first, node * second
returns: node * tot
---------------------------------------- */
node * addL( node * first, node * second )
{
    node * temp, * prev= NULL, * tot=NULL;
    int sum, left = 0, tally;
    
    while( first || second )
    {
        
        if( first )
            tally = first->data;
        else
            tally = 0;
            
        if( second )
            tally += second->data;
        else
            tally += 0;    
                    
        sum = left + tally;
        
        if( sum >= 10 )
            left = 1;
        else
            left = 0;
        
        sum = sum % 10;
        
        //pushL( &temp, sum );
        temp = addN( sum );
        
        if( tot == NULL ) 
            tot = temp;
        else
            prev->next = temp;
            
        prev = temp;
        
        if( first )
            first = first->next;
        if( second )
            second = second->next;
    }
    
    if( left > 0 )
        temp->next = addN( left );

    return tot;
}