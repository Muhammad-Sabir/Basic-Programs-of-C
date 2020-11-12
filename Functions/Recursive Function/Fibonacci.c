/*Write a C program to generate nth Fibonacci term using recursion*/

#include <stdio.h>
int f(int n); //Prototype of Fibonacci recursive function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int num;
	
	/*INPUT*/
	printf("Write the term number of fibonacci series which you want to find: ");
	scanf("%d",&num);
	
	/*OUTPUT*/
	printf("The %d term of fibonacci series is %d ", num, f(num));
	
	return 0;
}
/*End of main functions*/

int f(int n)
/*Start of Fibonacci recursive function*/
{
	int ans;
	
	if(n==0 || n==1)
	{
		ans = n;
	}
	else
	{
		ans = f(n-1) + f(n-2);
	}
	
	return ans;
}
/*End of Fibonacci recursive function*/
