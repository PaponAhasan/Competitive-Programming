```
A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges.

Other data structures such as arrays, linked list, stack, and queue are linear data structures that store data
sequentially.Tree data structures allow quicker and easier access to the data as it is a non-linear data structure.
Binary Search Trees(BSTs) are used to quickly check whether an element is present in a set or not.
Heap is a kind of tree that is used for heap sort.
```

### Tree Terminologies
```
Node : A node is an entity that contains a key or value and pointers to its child nodes.
Edge : It is the link between any two nodes.
Root : It is the topmost node of a tree.
Height of a Node : The height of a node is the number of edges from the node to the deepest leaf
Depth of a Node : The depth of a node is the number of edges from the root to the node.
Degree of a Node : The degree of a node is the total number of branches of that node.
Forest : A collection of disjoint trees is called a forest.
```

### Types of Tree
```
1. Binary Tree
2. Binary Search Tree
3. AVL Tree
4. B-Tree
```

### Tree Traversal
```
The tree traversal algorithm helps in visiting a required node in the tree. Traversing a tree means visiting every node in 
the tree. You might, for instance, want to add all the values in the tree or find the largest one. 

There can be three types of traversal : inorder, preorder and postorder
```

### Inorder Traversal
```
1. First, visit all the nodes in the left subtree
2. Then the root node
3. Visit all the nodes in the right subtree
```
```
inorder(root->left)
display(root->data)
inorder(root->right)
```
### Preorder Traversal
```
1. Visit root node
2. Visit all the nodes in the left subtree
3. Visit all the nodes in the right subtree
```
```
display(root->data)
preorder(root->left)
preorder(root->right)
```
### Postorder Traversal
```
1. Visit all the nodes in the left subtree
2. Visit all the nodes in the right subtree
3. Visit the root node
```
```
postorder(root->left)
postorder(root->right)
display(root->data)
```
