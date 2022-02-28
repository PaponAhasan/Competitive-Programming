### Binary/ N-ary Trees
```
A Binary Tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child,
and the topmost node in the tree is called the root.

Arrays, Linked Lists, Stack and queues, which are linear data structures, trees are hierarchical data structures.
```
```
where each node has the following 3 components:

1. Data element: Stores any kind of data in the node
2. Left pointer: Points to the tree on the left side of node
3. Right pointer: Points to the tree on the right side of the node

If a tree is empty, it is represented by a null pointer.
```
![image](https://user-images.githubusercontent.com/59710234/155928150-9efb502c-7532-4145-a59c-d04e81b44ece.png)
```
Root: Top node in a tree
Child: Nodes that are next to each other and connected downwards
Parent: Converse notion of child
Siblings: Nodes with the same parent
Descendant: Node reachable by repeated proceeding from parent to child
Ancestor: Node reachable by repeated proceeding from child to parent.
Leaf: Node with no children
Internal node: Node with at least one child
External node: Node with no children
```
### Why Trees?

```
1. Use trees when you want to store information that naturally forms a hierarchy.
2. Trees provide moderate access/search (quicker than Linked List and slower than arrays).
3. Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists).
4. Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.
```

### Trees are declared
 ```c++
  struct node
  {
       int data;                 //Data element
       struct node * left;       //Pointer to left node
       struct node * right;      //Pointer to right node
  };
 ```
### Simple Tree
```c++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
       data = val;
    
       left = NULL;
       right = NULL;
    }
};

int main()
{

   /*create root*/
   struct Node* root = new Node(1);

   root->left = new Node(2);
   root->right = new Node(3);
 

   root->left->left = new Node(4);

   return 0;
}

  
   /* following is the tree after above statement

	    1
	   / \
	NULL NULL
   */
   
   /* 2 and 3 become left and right children of 1
				 
           1
	 /   \
	2     3
       / \    / \
   NULL NULL NULL NULL
 
*/
	
	
/* 4 becomes left child of 2

         1
       /   \
      2     3
    / \    /  \
   4  NULL NULL NULL
  / \
NULL NULL

*/

```
