/* Name:        Muhammad Sabir
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

/*To Find the salary of 7 employees*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
	int hours, rate, emp = 1, pay, total;

	/*OPENING WHILE LOOP*/
	while (emp <= 7)
	{
        printf("Write your working hours and the rate per hour: \n");
        scanf("%d %d",&hours,&rate);
        pay = hours * rate;
        printf("The pay of the %d employee is: %d \n", emp, pay);
        emp++;
        total += pay;
	}

	/*OUTPUT*/
	printf("Total salary to be given is: %d",total);

	return 0;
}
