Stacks are dynamic data structures. Which follows the Last In First Out (LIFO). The last item to be inserted into a stack is the first one to be deleted from it.

Features of stacks

Dynamic data structures
Do not have a fixed size
Do not consume a fixed amount of memory
Size of stack changes with each push() and pop() operation. Each push() and pop() operation increases and decreases the size of the stack by 1.

Elements can be inserted or deleted only from one end of the stack i.e. from the top(). The element at the top is called the top() element. The operations of inserting and 
deleting elements are called push() and pop(). When the top element of a stack is deleted, if the stack remains non-empty.

![image](https://user-images.githubusercontent.com/59710234/154685301-5f1e10e7-a86c-44f1-bae3-46e06d902d50.png)

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
```
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
```
topElement ( ): Access the top element of a stack

 int topElement ( ){
    return stack[ top ];
 }
``` 
```
 isEmpty ( ) : Check whether a stack is empty

bool isEmpty ( ){
   if ( top == -1 )  //Stack is empty
      return true ; 
   else
      return false;
}
```
```
size ( ): Determines the current size of a stack

int size ( ){
   return top + 1;
}
```
