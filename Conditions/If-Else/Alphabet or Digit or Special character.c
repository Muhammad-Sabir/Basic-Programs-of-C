/*Muhammad Sabir Raza Attari
  sabir.work07@gmail.com */

/*To check if the input is an alphabet or a digit or a special character*/

#include <stdio.h>

int main()
{
    /*DECLARING VARIABLES*/
    char cha;

    /*INPUT*/
    printf("Enter any character: ");
    scanf("%c", &cha);

    /*ALPHABETS*/
    if((cha >= 'a' && cha <= 'z') || (cha >= 'A' && cha <= 'Z'))
    {
        printf("%c is an alphabet.", cha);
    }
    /*DIGITS*/
    else if(cha >= '0' && cha <= '9')
    {
        printf("%c is digit.", cha);
    }
    /*SPECIAL CHARACTERS*/
    else
    {
        printf("%c is special character.", cha);
    }

    return 0;
}
