Generic Stack Implementation in C
=================================

Stack : Last in First Out (LIFO) Static set.
An array based implementation is done.

This directory contains following files:
* stack.h: declarations of all the functions on stack

  Methods defined:
  * isEmpty: Checks if the stack is empty or not. 
  * isFull: Return bool if stack is full or not.
  * displaySize: Returns number of elements present in the stack.
  * push: Pushes an element into the stack. It takes a array and size of array.
  * pop: Removes the top element from the stack and returns a pop value.
  * peak: Returns the top of stack value without actually removing the element.
  * display: Diplay all the Elments available on stack.
  * change: Change any Element on Stack just Passing postion and new Elements

* stack.c: Implementation of functions defined in stack.h
  * isEmpty:
    Checks if top is -1.
  * isFull:
    Checks if top == size - 1.
  * displaySize:
    Returns top to last element count.
  * push:
    First checks if space is available. Then copies the element given in parameter push on top of stack. Increases top by 1.
  * pop:
    First checks if stack is empty. decreases top by 1 and returns the element.
  * peak:
    Checks if stack is empty. return the top of the stack.
