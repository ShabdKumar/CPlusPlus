#include<iostream>
using namespace std;

class Node
{
    public :
        int data;
        Node * left;
        Node * right;
        Node(int data)
        {
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BinarySearchTree
{
    public :
        Node * root;
        BinarySearchTree()
        {
            root = NULL;
        }

        void preOrder(Node * node)
        {
            if(node == NULL)
                return;
            else{
                cout<<node->data;
                preOrder(node->left);
                preOrder(node->right);
            }
        }

        void inOrder(Node * node)
        {
            if(node == NULL)
                return;
            else
            {
                inOrder(node->left);
                cout<<node->data;
                inOrder(node->right);
            }
        }

        void postOrder(Node * node)
        {
            if(node == NULL)
                return;
            else
            {
                postOrder(node->left);
                postOrder(node->right);
                cout<<node->data;
            }
        }

        Node * insertElement(Node * node, int data)
        {
            if(node == NULL){
                node = new Node(data);
                cout<<"Data inserted is : "<<node->data<<endl;
            }
            else if(data<=node->data)
                node->left = insertElement(node->left, data);
            else
                node->right = insertElement(node->right, data);
            return node;
        }
};

int main()
{
    BinarySearchTree binarySearchTree;
    binarySearchTree.root = binarySearchTree.insertElement(binarySearchTree.root, 6);
    binarySearchTree.root = binarySearchTree.insertElement(binarySearchTree.root, 4);
    binarySearchTree.root = binarySearchTree.insertElement(binarySearchTree.root, 8);
    binarySearchTree.root = binarySearchTree.insertElement(binarySearchTree.root, 2);
    binarySearchTree.root = binarySearchTree.insertElement(binarySearchTree.root, 5);
    cout<<endl;
    binarySearchTree.preOrder(binarySearchTree.root);
    cout<<endl;
    binarySearchTree.postOrder(binarySearchTree.root);
    cout<<endl;
    binarySearchTree.inOrder(binarySearchTree.root);
}
