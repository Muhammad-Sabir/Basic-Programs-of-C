/*Muhammad Sabir Raza Attari
  FA20-BSE-100*/

/*To find the electricity bill*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    float units, total, bill;

    /*INPUT*/
    printf("Write the number of units: ");
    scanf("%f",&units);

    /*CONDITIONING*/
    if(units <= 50)
    {
        total = units * 0.5;
        bill = total + (0.2 * total);
        printf("Your total electricity bill is Rs.%.2f", bill);
    }
    else if(units <= 150)
    {
        units = units - 50;
        total = (50*0.50)+(units * 0.75);
        bill = total + (0.2 * total);
        printf("Your total electricity bill is Rs.%.2f",bill);
    }
    else if(units <= 250)
    {
        units = units - 150;
        total = (50*0.50)+(100*0.75)+(units * 1.2);
        bill = total + (0.2 * total);
        printf("Your total electricity bill is Rs.%.2f",bill);
    }
    else if(units > 250)
    {
        units = units - 250;
        total = (50*0.50)+(100*0.75)+(100*1.2)+(units * 1.5);
        bill = total + (0.2 * total);
        printf("Your total electricity bill is Rs.%.2f",bill);
    }

    return 0;
}
