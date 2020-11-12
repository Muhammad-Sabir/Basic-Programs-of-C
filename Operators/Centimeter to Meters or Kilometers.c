/*Muhammad Sabir
  sabir.work07@gmail.com */

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLE*/
    float c,m,k;

    /*INPUT*/
    printf("Write length in centimeter: ");
    scanf("%f",&c);

    /*In Meters*/
    m = c/100;
    printf("In Meters = %.2f\n",m);

    /*In Kilometers*/
    k = c*1000;
    printf("In Kilometers %.1f\n",k);

    return 0;
}

