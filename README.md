# Binary Tree Project

**What is a binary tree**
A binary tree is a tree data structure which speaks to binary
being represented has a heirarchial structure of connected nodes.
Bianry trees are known for having no more that two child nodes.

**Binary tree type**
the different types of binary trees are:

	1. Full/Proper/strict binary trees.
	2. Complete binary tree.
	3. Perfect binary tree.
	4. Dgenerate binary tree.

**Tasks**
*0. New node*

Write a function that creates a binary tree node

Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
Where parent is a pointer to the parent node of the node to create
And value is the value to put in the new node
When created, a node does not have any child
Your function must return a pointer to the new node, or NULL on failure
