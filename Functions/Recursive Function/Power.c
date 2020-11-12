/*Write a C program to find power of any number using recursion*/

#include <stdio.h>
int pow(int b, int p); //Prototype of Power recursive function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int base, exp;
	
	/*INPUT*/
	printf("Write the base of your number: ");
	scanf("%d",&base);
	printf("Write the exponent of your number: ");
	scanf("%d",&exp);
	
	/*OUTPUT*/
	printf("%d ^ %d = %d ",base,exp,pow(base,exp));
	
	return 0;
}
/*End of main functions*/

int pow(int b, int p)
/*Start of Power recursive function*/
{
	int ans=0;
	
	if(p==0)
	{
		ans = 1;
	}
	else
	{
		ans = b * pow(b,p-1);
	}
	
	return ans;
}
/*End of Power recursive function*/
