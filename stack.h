#include <stdbool.h>

int top = -1;

// Return bool if Stack is Empty or not
bool isEmpty(int *arr, int size)
{
    return top == -1;
}

// Return bool if Stack is Full or not
bool isFull(int *arr, int size)
{
    return top == size - 1;
}

// Push Element on Stack if Stack is Not full
void push(int *arr, int size, int element)
{
    if (isFull(arr, size))
    {
        printf("\nStack is Overflow!!\n");
    }
    else
    {
        arr[++top] = element;
    }
}

// Return Pop Element if Stack is Not Empty
int pop(int *arr, int size)
{
    if (isEmpty(arr, size))
    {
        printf("\nStack is Underflow!!\n");
    }
    else
    {
        return arr[top--];
    }
}
// Diplay all the Elments
void display(int *arr, int size)
{
    if (isEmpty(arr, size))
    {
        printf("\nStack is Underflow!!\n");
    }
    else
    {
        printf("\nDisplay all the  elements: \n");
        for (int i = top; i >= 0; i--)
        {
            printf("|\t%d\t|\n", arr[i]);
        }
    }
}

// Return the peak element of Stack if Stack is not Empty
int peak(int *arr, int size)
{
    if (isEmpty(arr, size))
    {
        printf("\nStack is Underflow!!\n");
    }
    else
    {
        return arr[top];
    }
}

// Change any Element on Stack just Passing postion and new Elements
void change(int *arr, int size, int position, int newElement)
{
    if (position > top)
    {
        printf("\nPostion is Invalid!!\n");
    }
    else
    {
        arr[position] = newElement;
    }
}

int displaySize()
{
    int count = 0;
    for (int i = top; i >= 0; i--)
    {
        count++;
    }
    return count;
}