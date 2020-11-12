/*Muhammad Sabir
  sabir.work07@gmail.com */

/*To find a certain range of odd numbers*/

#include<stdio.h>

int main()
{
    int s_num, l_num; //s_num=starting number, l_num=limit number

    /*INPUT*/
    printf("Write a number from which you want to start: ");
    scanf("%d", &s_num);
    printf("Write a number up to which you want to print the odd numbers: ");
    scanf("%d", &l_num);

    for(; s_num<=l_num; s_num++)
    {
        if(s_num%2 != 0)
            printf("%d \n",s_num);
    }

    return 0;
}

