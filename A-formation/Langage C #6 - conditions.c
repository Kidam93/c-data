#include <stdio.h>

int main (void)
{
    /*
        == : egal a
        != : different de
        <  : plus petit que
        >  : plus grand que
        <= : plus petit ou egal a
        >= : plus grand ou egal a
    */


    int nombre = 0 ;
    int nombre2 = 10;

/*---------------------------------------------------------------*/

    if(nombre == 0)
    {
        printf("le nombre est plus petit que 20\n");
    }
    else
    {
        printf("le nombre est plus grand que 20\n");
    }
/*--------------------------------------------------------------*/

    switch(nombre2)
    {
        case 0:
            printf("tu as o ans !");
        break;
        case 10:
            printf("tu as 1o ans !");
        break;
        case 15:
            printf("tu as 15 ans !");
        break;
        case 20:
            printf("tu as 2o ans !");
        break;
    }
/*---------------------------------------------------------------*/

    return 0;
}
