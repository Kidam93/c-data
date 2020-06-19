#include <stdio.h>
#include <stdlib.h>


int main(void)

{
    int level2;
    int level = -1 ;
    double res;


    printf("choisir le niveau de depart : \n");
    scanf("%d", &level);

    printf("choisisser un niveau secondaire : \n");

    scanf("%d", &level2);

    res = level + level2;

    printf("le resulstat de level2 est de  : %lf", res);






return 0 ;

}
