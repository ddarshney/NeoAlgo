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

bool checkIsomorphism(BinaryTreeNode<int>* n1, BinaryTreeNode<int>* n2){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
}
