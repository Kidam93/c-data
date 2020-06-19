#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

stack new_stack(void)
{
    return NULL;
};

/*--------------------------------------------------*/

bool is_empty_stack(stack st)
{
    if(st == NULL)
        return true;
        return false;
}

/*--------------------------------------------------*/

 stack push_stack(stack st, int x)
 {
     stackElement *element;

     element = malloc(sizeof(*element));

     if(element == NULL)
     {
         fprintf(stderr, "probleme allocation dynamique\n");
         exit(EXIT_FAILURE);

     }
     element->value = x;
     element->next = st;

     return element;

 }

/*--------------------------------------------------*/
void print_stack(stack st)
{
    if(is_empty_stack(st))
    {
        printf("rien a afficher, la pile est vide\n");
        return;
    }

    while(!is_empty_stack(st))
    {
        printf("[%d]\n", st->value);
        st = st->next;

    }
}


/*--------------------------------------------------*/

 stack clear_stack(stack st)
 {
     stackElement *element;

     if(is_empty_stack(st));
     return new_stack();

     element = st->next;
     free(st);

    return clear_stack(element);
}
