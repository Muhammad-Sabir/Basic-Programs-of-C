/*Write a C program to convert Celcius to Fahrenheit or Kelvin
  Fahrenheit to Celcius or Kelvin
  Kelvin to Celcius or Fahrenheit*/

#include <stdio.h>
float cel_fah(float t); //Prototype of Celsius to Fahrenheit function
float cel_kel(float t); //Prototype of Celsius to Kelvin function
float fah_cel(float t); //Prototype of Fahrenheit to Celcius function
float fah_kel(float t); //Prototype of Fahrenheit to Kelvin function
float kel_cel(float t); //Prototype of Kelvin to Celcius function
float kel_fah(float t); //Prototype of Kelvin to Fahrenheit function

int main()
/*Start of  main function*/
{
	/*DECLARING VARIABLES*/
	float temp;
	char unit, convert;
	
	/*INPUT*/
	printf("Write your temperature: ");
	scanf("%f",&temp);
	printf("What is the unit of your temperature(C = Celsius or F = Fahrenheit or K = Kelvin): ");
	scanf(" %c",&unit);
	printf("In which unit do you want to convert?(C = Celsius or Fahrenheit or K = Kelvin): ");
	scanf(" %c",&convert);
	
	/*INPUT IS CELCIUS*/
	if(unit=='C' || unit =='c')
	{
		/*CELCIUS TO FAHRENHEIT*/
		if(convert=='F' || convert =='f')
		{
			printf("Your temperature in Fahrenheit is %.2f", cel_fah(temp));
		}
		/*CELCIUS TO KELVIN*/
		else if(convert=='K' || convert =='k')
		{
			printf("Your temperature in Kelvin is %.2f", cel_kel(temp));
		}
	}
	
	/*INPUT IS FAHRENHEIT*/
	else if(unit=='F' || unit =='f')
	{
		/*FAHRENHEIT TO CELCIUS*/
		if(convert=='C' || convert =='c')
		{
			printf("Your temperature in Celcius is %.2f", fah_cel(temp));
		}
		/*FAHRENHEIT TO KELVIN*/
		else if(convert=='K' || convert =='k')
		{
			printf("Your temperature in Kelvin is %.2f", fah_kel(temp));
		}
	}
	
	/*INPUT IS KELVIN*/
	else if(unit=='K' || unit =='k')
	{
		/*KELVIN TO CELCIUS*/
		if(convert=='C' || convert =='c')
		{
			printf("Your temperature in Celcius is %.2f", kel_cel(temp));
		}
		/*KELVIN TO FAHRENHEIT*/
		else if(convert=='F' || convert =='f')
		{
			printf("Your temperature in Fahrenheit is %.2f", kel_fah(temp));
		}
	}
	
	return 0;
}
/*End of main functions*/

float cel_fah(float t)
/*Start of Celsius to Fahrenheit function*/
{
	float ans;
	
	ans = (t*9/5)+32;
	
	return ans;
}
/*End of Celsius to Fahrenheit function*/

float cel_kel(float t)
/*Start of Celsius to Kelvin function*/
{
	float ans;
	
	ans = t+273.15;
	
	return ans;
}
/*End of Celsius to Kelvin function*/

float fah_cel(float t)
/*Start of Fahrenheit to Celcius function*/
{
	float ans;
	
	ans = (t-32)*(5/9);
	
	return ans;
}
/*End of Fahrenheit to Celcius function*/

float fah_kel(float t)
/*Start of Fahrenheit to Kelvin function*/
{
	float ans;
	
	ans = (t-459.67)*(5/9);
	
	return ans;
}
/*End of Fahrenheit to Kelvin function*/

float kel_cel(float t)
/*Start of Kelvin to Celcius function*/
{
	float ans;
	
	ans = t-237.15;
	
	return ans;
}
/*End of Kelvin to Celcius function*/

float kel_fah(float t)
/*Start of Kelvin to Fahrenheit function*/
{
	float ans;
	
	ans = (t*5/9)-459.67;
	
	return ans;
}
/*End of Kelvin to Fahrenheit function*/
