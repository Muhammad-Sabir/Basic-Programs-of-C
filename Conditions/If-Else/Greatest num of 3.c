/* Muhammad Sabir
  sabir.work07@gmail.com */

/*To Find the greatest number of 3*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int num1, num2, num3;

    /*TAKING INPUT*/
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    printf("Enter your third number: ");
    scanf("%d",&num3);

    /*CONDITIONING*/
    if (num1 > num2 && num1 > num3)
        printf("Your max number is %d",num1);
    else if (num2 > num1 && num2 > num3)
        printf("Your max number is %d",num2);
    else
        printf("Your max number is %d",num3);

    return 0;
}
