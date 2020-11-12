/* Muhammad Sabir
   sabir.work07@gmail.com*/

/*To find area of a rectangle*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int l,w,a;

    /*INPUT*/
    printf("Length: ");
    scanf("%d", &l);
    printf("Width: ");
    scanf("%d", &w);

    /*AREA*/
    a = l*w;
    /*OUTPUT*/
    printf("Area is %d",a);

    return 0;
}

