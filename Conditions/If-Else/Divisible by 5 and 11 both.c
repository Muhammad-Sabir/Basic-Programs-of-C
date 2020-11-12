/* Muhammad Sabir
  sabir.work07@gmail.com */

/*Find a number which is divisible by 5 and 11 at the same time*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int num;

    /*TAKING INPUT*/
    printf("Enter your number: ");
    scanf("%d",&num);

    /*CONDITIONING*/
    if (num%5==0 && num%11==0)
        printf("Your number is divisible by 5 and 11.");
    else
        printf("Your number is not divisible by 5 and 11 at the same time.");

    return 0;
}
