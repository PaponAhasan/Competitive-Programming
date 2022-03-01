### Binary/ N-ary Trees

![image](https://user-images.githubusercontent.com/59710234/156151445-a827dfe2-c83b-4197-bb2d-76cca2108573.png)

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
```
1) The maximum number of nodes at level 'l' of a binary tree is 2^l.
   For root, l = 0, number of nodes = 2^0 = 1 
   
2) The Maximum number of nodes in a binary tree of height 'h' is 2^h. 
   The Maximum number of total nodes in a binary tree of height 'h' is 2^(h+1) -1. 
 ```
 
 ![image](https://user-images.githubusercontent.com/59710234/156149791-6d839008-6f2a-482b-95c4-e1ef1a70e9df.png)
 
 ```
3) In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is Log2(N+1).   
   Log2(1) = 0; Log2(2) = 1; Log2(3) = 1.584963; Log2(4) = 2

4) A Binary Tree with L leaves has at least | Log2L |+ 1   levels.
   log2(8) = 3
```

```
 For Full Binary Tree ;
 L = T + 1
 Where L = Number of leaf nodes
 T = Number of internal nodes with two children
```
![image](https://user-images.githubusercontent.com/59710234/156152465-ca2f82b0-1519-4781-98d8-b4fbbebaa87f.png)

https://www.geeksforgeeks.org/binary-tree-data-structure/
