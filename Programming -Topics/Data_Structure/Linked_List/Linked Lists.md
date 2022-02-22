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
  typedef struct LinkedList *node;                     //Define node as pointer of data type struct LinkedList

  node createNode(){
      node temp;                                       // declare a node
      temp = (node)malloc(sizeof(struct LinkedList));  // allocate memory using malloc()
      temp->next = NULL;                               // make next point to NULL
      return temp;                                     //return the new node
  }
  
  OR
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

https://www.geeksforgeeks.org/data-structures/linked-list/?ref=ghm
