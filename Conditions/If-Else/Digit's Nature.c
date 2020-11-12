/*Muhammad Sabir
  sabir.work07@gmail.com */

/*To check the nature of the input number*/

#include <stdio.h>

int main()
{
    int num;

    /*TAKING INPUT*/
    printf("Enter your number: ");
    scanf("%d",&num);

    /*CONDITIONING*/
    if (num > 0)
        printf("Your number is positive.");
    else if (num == 0)
        printf("Your number is neutral/zero.");
    else
        printf("Your number is negative");

    return 0;
}
