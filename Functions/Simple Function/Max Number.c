/*Write a C program to find maximum and minimum between two numbers using functions*/

#include <stdio.h>
int max(int n1, int n2); //Prototype of Max Min Function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int num1, num2;
	
	/*INPUT*/
	printf("Write your first number: ");
	scanf("%d",&num1);
	printf("Write your second number: ");
	scanf("%d",&num2);
	
	/*OUTPUT*/
	max(num1,num2);
	
	return 0;
}
/*End of main functions*/

int max(int n1, int n2)
/*Start of Max Min function*/
{
	if(n1>n2)
	{
		printf("%d is greater than %d",n1,n2);
	}
	else
	{
		printf("%d is greater than %d",n2,n1);
	}
}
/*End of Max Min function*/
