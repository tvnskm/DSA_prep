#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

};

void inorder(Node* root);

int main() {

    Node* root = new Node();
    root->data = 3;
    root->left = nullptr;
    root->right = nullptr;

    Node* node1 = new Node();
    node1->data = 5;
    node1->left = nullptr;
    node1->right = nullptr;

    Node* node2 = new Node();
    node2->data = 2;
    node2->left = nullptr;
    node2->right = nullptr;

    root->left = node1;
    root->right = node2;  
    
    inorder(root);

    return 0;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root-> left);
    cout<<root->data<<" ";
    inorder(root->right);

}


