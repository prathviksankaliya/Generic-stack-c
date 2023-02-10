#include <stdio.h>
#include "stack.h"

int main()
{
    int size;
    printf("Enter the Require size of Stack: \n");
    scanf("%d", &size);

    int stack[size];

    // Push some Element into stack
    push(stack, size, 10);
    push(stack, size, 20);
    push(stack, size, 30);
    push(stack, size, 40);
    push(stack, size, 50);

    // Display all Element from stack
    display(stack, size);

    // Peck element of stack
    printf("Peak Element: %d\n", peak(stack, size));

    // Pop last element of stack
    pop(stack, size);

    display(stack, size);

    // Change Element from Given postion with new Value 
    change(stack, size, 2, 300);

    display(stack, size);

    // check stack is Empty or Not
    if (isEmpty(stack, size))
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is Not Empty\n");
    }

    // check stack is Full or Not
    if (isFull(stack, size))
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Stack is Not Full\n");
    }

    // Display the size of current elements on Stack 
    printf("Display Size of Stack : %d", displaySize());
    return 0;
}
