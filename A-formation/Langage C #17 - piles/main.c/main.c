#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
  stack sta = new_stack();

  if(is_empty_stack(sta))
  printf("la pile est vide\n");
  else
  printf("la pile est pleine\n");

    print_stack(sta);

    sta = push_stack(sta, 14);
    sta = push_stack(sta, 47);

    print_stack(sta);

  if(is_empty_stack(sta))
  printf("la pile est vide\n");
  else
  printf("la pile est pleine\n");

   sta = clear_stack(sta);

  if(is_empty_stack(sta))
  printf("la pile est vide\n");
  else
  printf("la pile est pleine\n");



    return 0;
}
