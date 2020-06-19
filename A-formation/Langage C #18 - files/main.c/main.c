#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void)
{
    printf("taille de la file : %d\n", queue_length());
    print_queue();

    push_queue(14);
    push_queue(-26);
    push_queue(173);
    printf("taille de la file : %d\n", queue_length());
    print_queue();

    pop_queue();
    printf("taille de la file : %d\n", queue_length());
    print_queue();

    return 0;

}

