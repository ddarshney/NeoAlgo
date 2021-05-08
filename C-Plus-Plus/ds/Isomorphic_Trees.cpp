/*Given two binary trees. Check whether these two trees are isomorphic or not.
Isomorphic trees are the ones which can be made identical by series of flips i.e. by swapping left and right children of a number of nodes.*/

// Following is the Binary Tree node structure

class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
    }
};
The first line of each test case will contain the values of the nodes of the first tree in the level order form ( -1 for NULL node).

The second line of each test case will contain the values of the nodes of the second tree in the level order form ( -1 for NULL node). 
bool isIsomorphic(BinaryTreeNode<int> *t1, BinaryTreeNode<int> *t2) {
    if (t1 == NULL && t2 == NULL) {
        return true;
    }

    else if (t1 == NULL || t2 == NULL) {
        return false;
    }

    if (t1->data != t2->data) {
        return false;
    }

    return ((isIsomorphic(t1->left, t2->left) && isIsomorphic(t1->right, t2->right)) ||
            (isIsomorphic(t1->left, t2->right) && isIsomorphic(t1->right, t2->left)));
}


bool checkTree(BinaryTreeNode<int> *tree1, BinaryTreeNode<int> *tree2) {
    return isIsomorphic(tree1, tree2);
}
/*
        Time Complexity : O(min(m,n))
        Space Complexity : O(min(m,n)),
        where m and n are the number of non-NULL nodes in the first and second tree respectively
 */
