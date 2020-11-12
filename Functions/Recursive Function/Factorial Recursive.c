/*Write a C program to find factorial of any number using recursion*/

#include <stdio.h>
int fact(int n); //Prototype of Factorial recursive function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int num;
	
	/*INPUT*/
	printf("Write a number to find its factorial: ");
	scanf("%d",&num);
	
	/*OUTPUT*/
	printf("%d! = %d ", num, fact(num));
	
	return 0;
}
/*End of main functions*/

int fact(int n)
/*Start of Factorial recursive function*/
{
	int ans=0;
	
	if(n==0)
	{
		ans = 1;
	}
	else
	{
		ans = n * fact(n-1);
	}
	
	return ans;
}
/*End of Factorial recursive function*/
