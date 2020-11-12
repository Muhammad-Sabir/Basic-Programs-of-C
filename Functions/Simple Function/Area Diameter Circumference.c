/*Write a C program to find diameter, circumference and area of circle using functions*/

#include <stdio.h>
#define PI 3.14
int area(int n); //Prototype of area function
int circum(int n); //Prototype of circumference function
int diameter(int n); //Prototype of diameter function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	int rad;
	
	/*INPUT*/
	printf("Write the radius of the circle: ");
	scanf("%d",&rad);
	
	/*CIRCUMFERENCE*/
	printf("The circumference of your circle is %d\n", circum(rad));
	
	/*Area*/
	printf("The area of your circle is %d\n", area(rad));
	
	/*DIAMETER*/
	printf("The diameter of your circle is %d\n", diameter(rad));
	
	return 0;
}
/*End of main functions*/

int diameter(int n)
/*Start of diameter function*/
{
	return 2*n;
}
/*End of diameter function*/

int area(int n)
/*Start of area function*/
{
	return PI*(n*n);
}
/*End of area function*/

int circum(int n)
/*Start of circumference function*/
{
	return 2*PI*n;
}
/*End of circumference function*/
