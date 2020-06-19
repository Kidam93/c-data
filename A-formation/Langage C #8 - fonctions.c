#include <stdio.h>

int init_balle(int posx )
{
    posx = 0;

    return posx;
}

int main(void)
{

    int balleX;


    printf("la balleX %d", balleX);

    balleX = init_balle(balleX);

    printf("la balleX %d", balleX);


    return 0;
}
