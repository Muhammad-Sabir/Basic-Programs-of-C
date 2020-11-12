/*Muhammad Sabir
  sabir.work07@gmail.com */

/*MATHEMATICS TABLES*/

#include<stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int num1,num2,ans;

    /*INPUT*/
    printf("Write the number: ");
    scanf("%d",&num1);

    for(num2=1; num2<=10; num2++)
    {
        ans = num1*num2;
        printf("%d x %d = %d \n",num1,num2,ans);
    }

    return 0;
}

