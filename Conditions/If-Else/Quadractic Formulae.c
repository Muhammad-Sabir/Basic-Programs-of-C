/*Muhammad Sabir
  sabir.work07@gmail.com*/

#include <stdio.h>
#include <math.h>

int main()
{
    /*DECLARING VARIABLES*/
    int a, b, c, d;
    float Root1, Root2;

    /*INPUT*/
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    /*DISCRIMINENT*/
    d = b*b - 4*a*c;

    /*CONDITIONING*/
    if(d>0)
    {
        Root1 = (-b + sqrt(d)) / (2*a);
        Root2 = (-b - sqrt(d)) / (2*a);

        printf("Root 1 is %.2f \n",Root1);
        printf("Root 2 is %.2f \n",Root2);
    }

    else
    {
        printf("Root 1 is %.2f + %.2f i\n", -b/(double)(2*a), sqrt(-d)/(2*a));
        printf("Root 2 is %.2f - %.2f i\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    }

    return 0;
}
