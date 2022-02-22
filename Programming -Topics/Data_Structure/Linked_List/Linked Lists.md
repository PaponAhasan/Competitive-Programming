### What is Linked List?

![image](https://user-images.githubusercontent.com/59710234/155120811-c06d17cc-7271-4cae-825e-d5b715a54496.png)

```
Linked lists are one of the most fundamental data structures. It is a chain of nodes with each node having data and a pointer to
the next node. The head pointer points to the first node and the last element of the list points to NULL. Lists can be emptytoo. 
In that case, the head points to NULL.

A linked list is a way to store a collection of elements. Each element in a linked list is stored in the form of a node.
```
### Node

![image](https://user-images.githubusercontent.com/59710234/155120216-bdeecd3f-ba61-4064-bec9-012bf8c6511e.png)

```
A node is a collection of two sub-elements or parts. A data part that stores the element and a next part that stores the link to 
the next node.
```
### Basic Operations
```
  Declaring - 
  
  Creating - 
  
  Traversing - 
  
  Insertion − Adds an element at the beginning of the list.

  Deletion − Deletes an element at the beginning of the list.

  Display − Displays the complete list.

  Search − Searches an element using the given key.

  Delete − Deletes an element using the given key.
  
  Reverse Operation - Reverse an element make the last node to be pointed by the head node.
```
### Types of Linked List
```
  Simple Linked List − Item navigation is forward only.

  Doubly Linked List − Items can be navigated forward and backward.

  Circular Linked List − Last item contains link of the first element as next and the first element has a link to the last 
                         element as previous.
  Doubly Circular linked list - 
  
  Header Linked List - 
```
### Singly Linked List

![image](https://user-images.githubusercontent.com/59710234/155121977-ccbbfbd0-2e9f-472e-9fd2-18d24c412ddb.png)

```
Which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next node means that the node stores the address of the next node in the sequence. A single linked list allows traversal of data only in one way.
```
### Declaring a Linked list
```c
C
  // A linked list node
  struct Node {
      int data;
      struct Node* next;
  };
```
```c++
C++
  class Node {
  public:
    int data;
    Node* next;
  };
```
### Creating a Node
```c
C
  int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct
  }
 ``` 
 ```c++
 C++
  #include <cstddef>

  using namespace std;

  class Node {
      public:
          int data;
      Node * next;
  };

  int main() {
      Node * head = NULL;
      Node * second = NULL;
      Node * third = NULL;

      head = new Node();
      second = new Node();
      third = new Node();
  }
```
### Add a Node to the Linked List

https://ideone.com/E1zDQQ </br>
https://ideone.com/zd8nKm </br>

### Traversing the List

```
  node p;
  p = head;
  while(p != NULL){
      p = p->next;
  }
```
```
  void printList(Node* n)
  {
      while (n != NULL) {
          cout << n->data << " ";
          n = n->next;
      }
  }
```
## Insertion Operation

```
Adding a new node in linked list, First, create a node using the same structure and find the location where it has to be inserted.
```

![image](https://user-images.githubusercontent.com/59710234/155150453-7b830458-1f5d-40d5-a3fd-eb55336ecbf4.png)

```
Inserting a node B (NewNode), between A (LeftNode) and C (RightNode). 
```

![image](https://user-images.githubusercontent.com/59710234/155150469-c118b7da-f20f-4f94-b1f0-41d5a90a03d7.png)

```
Then point B.next to C -> NewNode.next −> RightNode;
```

![image](https://user-images.githubusercontent.com/59710234/155150486-3927f6ce-01e8-4555-9fe7-2b50874ac66c.png)

```
Now, the next node at the left should point to the new node -> LeftNode.next −> NewNode;
```

![image](https://user-images.githubusercontent.com/59710234/155150512-cc31db43-b327-4831-8f44-5b817424b746.png)

```
This will put the new node in the middle of the two.

Similar steps should be taken if the node is being inserted at the (beginning) of the list. While inserting it at the (end), the second 
last node of the list should point to the new node and the new node will point to NULL.
```

### Array vs Linked List
```
Like arrays, Linked List is a linear data structure. Linked list elements are not stored at a contiguous location; the elements are linked 
using pointers.

Arrays can be used to store linear data of similar types, but arrays have the following limitations :
1) The size of the arrays is fixed
2) Inserting a new element in an array of elements is expensive because ,
   the room has to be created for the new elements and to create room existing elements have to be shifted 
   |1|2|5| if 4 insert 2 index ; |1|2|4|?| -> |1|2|4|5| ; we have to move all the elements after 2
   but in Linked list if we have the head node then we can traverse to any node through it and insert new node at the required position.

Linked List have the following limitations : 

1) Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do 
   binary search with linked lists efficiently but implementation O(n) possible
2) Extra memory space for a pointer is required with each element of the list. 
```





https://www.geeksforgeeks.org/data-structures/linked-list/?ref=ghm

https://www.geeksforgeeks.org/linked-list-set-1-introduction/?ref=lbp
