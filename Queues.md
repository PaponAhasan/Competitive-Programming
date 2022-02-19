### standard queue

```
Queues are data structures that follow the First In First Out (FIFO) i.e. the first element that is added to the queue is the first one to be removed.

Elements are always added to the back and removed from the front. Think of it as a line of people waiting for a bus. The person who is at the beginning of the line is 
the first one to enter the bus.

* queue[] : Array in which queue is simulated
* arraySize : Maximum number of elements that can be stored in a queue
* front : Points at the index where the next deletion will be performed
* rear : Points at the index where the next insertion will be performed
```
### Queues support the following fundamental functions:

```c++
Enqueue

void enqueue(int queue[], int element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
         queue[rear] = element;    // Add the element to the back
         rear++;
    }
}
```

```c++
Dequeue

void dequeue(int queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}
```
```c++
Front

int Front(int queue[], int front) {
    return queue[front];
}
```
```c++
Size

int size(int front, int rear) {
    return (rear - front);
}
```
```c++
IsEmpty

bool isEmpty(int front, int rear) {
    return (front == rear);
}
```
![image](https://user-images.githubusercontent.com/59710234/154786989-19971916-e0ad-404c-b26a-bd1801f57d45.png)

### Full Code:

https://ideone.com/4a1x7z

### Queue variations
```
* Double-ended queue
* Circular queue
```
### Double-ended queue
```
A double-ended queue, characters can be inserted and deleted from both the front and back of the queue.
```
```c++
Insert at back

void insert_at_back(int queue[], int element, int &rear, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        queue[rear] = element;
        rear = rear + 1;
    }
}
```
```c++
Delete from back

void delete_from_back(int queue[], int &rear, int front){
    if(front == rear)
        printf("Underflow\n");
    else{
        rear = rear - 1;
        queue[rear] = 0;
    }
}
```
```c++
Insert at front

void insert_at_front(int queue[], int &rear, int &front, int element, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        for(int i=rear; i>front; i--)
            queue[i] = queue[i-1]; // switch element
            
            /*
            size = 4
            Before Queue :
            0->2 | 1->4 | 2->6 | 3->7
            
            After Queue :
            1->2 | 2->4 | 3->6 | 4->7
            
            0->new_element
            */
            
        queue[front] = element;
        rear = rear+1;
    }
}
```
```c++
Delete from front

void delete_front_front(int queue[], int &front, int &rear){
    if(front == rear)
        printf("Underflow\n");
    else{
        queue[front] = 0;
        front = front + 1;
    }
}
```
```c++
Get front element

int get_front(int queue[], int front){
    return queue[front];
}
```
```c++
Get rear element

int get_rear(int queue[], int rear){
    return queue[rear-1];
}
```
```c++
Size

int size(int front, int rear) {
    return (rear - front);
}
```
```c++
IsEmpty

bool isEmpty(int front, int rear) {
    return (front == rear);
}
```
### Circular queues

