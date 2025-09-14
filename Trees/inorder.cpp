#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

};

int main() {

    Node* root = new Node();
    root->data = 3;
    Node* node1 = new Node();
    node1->data = 5;
    Node* node2 = new Node();
    node2->data = 2;
    root->left = node1;
    root->right = node2;    


    
    return 0;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root-> left);
    cout<<root->data<<" ";
    inorder(root->right);

}


