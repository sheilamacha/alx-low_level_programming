/* 
 * File: 1-last_digit.c 
 * Auth: Sheila Macharia 
 */ 
  
#include <stdlib.h> 
#include <time.h> 
#include <stdio.h> 
  
/** 
 * main - Prints the last digit of a randomly generated number 
 *        and whether it is greater than 5, less than 6, or 0. 
 * 
 * Return: Always 0. 
 */ 
int main(void) 
{ 
  int n, lastDigit;
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    lastDigit = n % 10;
    if(lastDigit>5)
    {
    	printf("Last digit of %d is %d and is greater than 5\n",n,lastDigit);
	}
	 if(lastDigit==0)
    {
    	printf("Last digit of %d is %d and is 0\n",n,lastDigit);
	}
	 if(lastDigit<6&&lastDigit !=0)
    {
    	printf("Last digit of %d is %d and is less than 6 and not 0\n",n,lastDigit);
	}
    return 0;
}
