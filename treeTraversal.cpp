#include<iostream>
using namespace std;

template <typename T>
struct BinaryNode{
T data;
BinaryNode* left;
BinaryNode* right;

BinaryNode(const T &d){
data = d;
left = NULL;
right = NULL;
}
};

template <typename T>
void preorder(BinaryNode<T>* t){
if(t == NULL)return ;
cout<<t->data<<" -> ";
preorder(t->left);
preorder(t->right);
}

template <typename T>
void inorder(BinaryNode<T>* t){
if(t == NULL)return ;

inorder(t->left);
cout<<t->data<<" -> ";
inorder(t->right);
}

template <typename T>
void postorder(BinaryNode<T>* t){
if(t == NULL)return ;

postorder(t->left);
postorder(t->right);
cout<<t->data<<" -> ";
}