# stacks
```
Stacks are dynamic data structures. Which follows the Last In First Out (LIFO). The last item to be inserted into a stack is the first one to be deleted from it.

Features of stacks : 

* Dynamic data structures
* Do not have a fixed size
* Do not consume a fixed amount of memory
* Size of stack changes with each push() and pop() operation. Each push() and pop() operation increases and decreases the size of the stack by 1.

Elements can be inserted or deleted only from one end of the stack i.e. from the top(). The element at the top is called the top() element. The operations of inserting and 
deleting elements are called push() and pop(). When the top element of a stack is deleted, if the stack remains non-empty.
```
```
There are some basic operations that allow us to perform different actions on a stack.

* Push: Add an element to the top of a stack
* Pop: Remove an element from the top of a stack
* IsEmpty: Check if the stack is empty
* IsFull: Check if the stack is full
* Peek: Get the value of the top element without removing it

```
![image](https://user-images.githubusercontent.com/59710234/154685301-5f1e10e7-a86c-44f1-bae3-46e06d902d50.png)

### Working of Stack Data Structure
```
The operations work as follows:

* A pointer called TOP is used to keep track of the top element in the stack.
* When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
* On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
* On popping an element, we return the element pointed to by TOP and reduce its value.
* Before pushing, we check if the stack is already full
* Before popping, we check if the stack is already empty
```
![image](https://user-images.githubusercontent.com/59710234/154731904-fb3526ef-b3cd-445b-9988-7097012fabae.png)

![image](https://user-images.githubusercontent.com/59710234/154731367-fdb9d537-5226-4140-8e33-e78254997cf9.png)

```c++
push( x ): Insert element x at the top of a stack

void push (int stack[ ] , int x , int n) {
 if ( top == n-1 ) {         //If the top position is the last of position in a stack, this means that the stack is full
    cout << “Stack is full.Overflow condition!” ;
    }
    else{
        top = top +1 ;            //Incrementing top position 
        stack[ top ] = x ;       //Inserting element on incremented position  
    }
}
```
```c++
pop( ): Removes an element from the top of a stack

void pop (int stack[ ] ,int n ) {
   if( isEmpty ( ) ){
      cout << “Stack is empty. Underflow condition! ” << endl ;
   }
   else{
      top = top - 1 ; //Decrementing top’s position will detach last element from stack            
    }
}
```
```c++
topElement ( ): Access the top element of a stack

 int topElement ( ){
    return stack[ top ];
 }
``` 
```c++
 isEmpty ( ) : Check whether a stack is empty

bool isEmpty ( ){
   if ( top == -1 )  //Stack is empty
      return true ; 
   else
      return false;
}
```
```c++
size ( ): Determines the current size of a stack

int size ( ){
   return top + 1;
}
```

### Full Code :

https://ideone.com/JxulmB

### Stack Time Complexity
```
For the array-based implementation of a stack, the push and pop operations take constant time, i.e. O(1)
```
### Problem : Balanced Parentheses
```
You have a bracket sequence made up of opening '(' and closing ')' parentheses. You must check if this bracket sequence is balanced.
```
https://ideone.com/MHpQw4