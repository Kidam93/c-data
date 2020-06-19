#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

    /* type booleen */

    typedef enum
    {
        false,
        true
    }bool;

    /*definition d'une pile*/

    typedef struct stackElement
    {
        int value;
        struct stackElement *next;
    }stackElement, *stack;

    /*prototype de fonction*/

    stack new_stack(void);
    bool is_empty_stack(stack st);
    void print_stack(stack st);
    stack push_stack(stack st, int x);
    stack clear_stack(stack st);


#endif // STACK_H_INCLUDED
