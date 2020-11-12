/*Muhammad Sabir
  sabir.work07@gmail.com */

/*How to find perimeter*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int l,b,p;

    /*INPUT*/
    printf("Write length of the rectangle: ");
    scanf("%d",&l);
    printf("Write breadth of the rectangle:  ");
    scanf("%d",&b);

    /*PERIMETER*/
    p = 2*(l+b);
    printf("Perimeter = %d",p);

    return 0;
}
