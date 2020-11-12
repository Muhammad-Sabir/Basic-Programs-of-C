/* Muhammad Sabir
   sabir.work07@gmail.com */

/*SIMPLE CALCULATOR*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int num1,num2;

    /*INPUT*/
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your 2nd number: ");
    scanf("%d",&num2);

    /*SUM*/
    printf("Sum = %d\n",num1+num2);

    /*SUBTRACTION*/
    printf("Difference = %d\n",num1-num2);

    /*PRODUCT*/
    printf("Product = %d\n",num1*num2);

    /*QUOTIEN*/
    printf("Quotient = %d\n",num1/num2);

    /*Remainder*/
    printf("Remainder = %d\n",num1%num2);

    return 0;
}
