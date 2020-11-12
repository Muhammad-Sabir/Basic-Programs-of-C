/*Muhammad Sabir
  sabir.work07@gmail.com */

/*Day number to day name*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int week;

    /*INPUT*/
    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    /*SWITCH*/
    switch (week)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
