/*Muhammad Sabir
  sabir.work07@gmail.com */

/*Print even numbers from one point to another*/

#include<stdio.h>

int main()
{
    /*DELARING VARIABLES*/
    int s_num, l_num; //s_num = starting number & l_num=limit number

    /*INPUT*/
    printf("Write a number from where you want to start: ");
    scanf("%d", &s_num);
    printf("Write a number up to which you want to print even numbers: ");
    scanf("%d", &l_num);

    /*FOR LOOP*/
    for(; s_num <= l_num; s_num++)
    {
        if(s_num%2==0)
            printf("%d \n",s_num);
    }

    return 0;
}

