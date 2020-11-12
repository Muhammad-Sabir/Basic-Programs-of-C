/*Write a C program to print all natural numbers between 1 to n using recursion*/

#include <stdio.h>
int natural(int l_lim, int u_lim); //Prototype of Natural Number recursive function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int low, up;
	
	/*INPUT*/
	printf("Write the lower limit of your natural numbers: ");
	scanf("%d",&low);
	printf("Write the upper limit of your natural numbers: ");
	scanf("%d",&up);
	
	/*OUTPUT*/
	printf("The natural numbers withing your range are: ");
	natural(low,up);
	
	return 0;
}
/*End of main functions*/

int natural(int l_lim, int u_lim)
/*Start of Natural Number recursive function*/
{
	if(l_lim>u_lim)
	{
		return;
	}

	printf("%d ",l_lim);
	natural(l_lim+1,u_lim);
	
}
/*End of Natural Number recursive function*/
