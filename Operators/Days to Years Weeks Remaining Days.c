/*Muhammad Sabir
  sabir.work07@gmail.com */

/*To convert days to years weeks and remaining days*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    int d,y,w,r;

    /*INPUT*/
    printf("Write days: ");
    scanf("%d",&d);

    /*YEARS*/
    y= d/365;
    printf("In Years = %d\n",y);

    /*WEEKS*/
    w = (d%365)/7;
    printf("In Weeks = %d\n",w);

    /*Remaining Days*/
    r = d-((y*365)+(w*7));
    printf("Remainder = %d\n",r);

    return 0;
}


