// binary tree creation
// if input is -1, return null
// create node
// left traversal
// right traversal
// return address

#include <bits/stdc++.h>
using namespace std;
class node //node creation
{
public:
    int data;
    node *right, *left;
    node(int value)
    {
        data = value;
        right = left = NULL;
    }
};
node *binarytree() //insertion
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    node *temp = new node(x);
    cout << "enter left child of " << x << " : ";
    temp->left = binarytree();
    cout << "enter right child of " << x << " : ";
    temp->right = binarytree();
    return temp;
}
int sum(node *root){
    if(root == NULL) 
        return 0;
    return root->data +sum(root->left) +sum(root->right);

}
void preorder(node *root) // preorder traversal
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    node *root;
    cout << "enter root node: ";
    root = binarytree();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout<<sum(root);
    return 0;
}