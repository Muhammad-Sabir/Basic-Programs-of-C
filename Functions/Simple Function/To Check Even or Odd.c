/* Write a C program to check whether a number is even or odd using functions*/

#include <stdio.h>
int even_odd(int n); //Prototype of Even Odd function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int num;
	
	/*INPUT*/
	printf("Write a number to check if its eve or odd: ");
	scanf("%d",&num);
	
	/*OUTPUT*/
	even_odd(num);
	
	return 0;
}
/*End of main functions*/

int even_odd(int n)
/*Start of Even Odd function*/
{
	if(n%2==0)
	{
		printf("%d is an even number",n);
	}
	else
	{
		printf("%d is an odd number",n);
	}
}
/*End of Even Odd function*/
