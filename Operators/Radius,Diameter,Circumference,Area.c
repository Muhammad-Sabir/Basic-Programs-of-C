/*Muhammad Sabir
  sabir.work07@gmail.com */

#include <stdio.h>

int main()
{
    /*DECLAING VARIABLES*/
    int r, d, c, a;

    /*INPUT*/
    printf("Radius: ");
    scanf("%d", &r);

    /*DIAMETER*/
    d = 2*r;
    printf("Diameter= %d\n",d);

    /*CIRCUMFERENCE*/
    c = 2*3.14*r;
    printf("Circumference= %d\n",c);

    /*AREA*/
    a = 3.14 * r*r;
    printf("Area= %d\n",a);

    return 0;
}

