/*Write a C program to find cube of any number using function*/

#include <stdio.h>
int cube(int n); //Prototype of cube function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int num;
	
	/*INPUT*/
	printf("Write a number to find its cube: ");
	scanf("%d",&num);
	
	/*OUTPUT*/
	printf("The cube of %d is %d", num, cube(num));
	
	return 0;
}
/*End of main functions*/

int cube(int n)
/*Start of cubic function*/
{
	return n*n*n;
}
/*End of cubic function*/
