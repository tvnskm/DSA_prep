#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

};

int size(Node* root){
    if(root==nullptr) return 0;

    return size(root->left)+size(root->right)+1 ;
}

int main() {

    Node* root = new Node();
    root->data = 3;
    

    Node* node1 = new Node();
    node1->data = 5;
   

    Node* node2 = new Node();
    node2->data = 2;
    

    Node* node3 = new Node();
    node3->data = 89;
    node1->left = node3;
    node3->left = nullptr;
    node3->right = nullptr;

    Node* node4 = new Node();
    node4->data = 29;
    node1->right = node4;
    node4->left = nullptr;
    node4->right = nullptr;
    

    Node* node5 = new Node();
    node5->data = 19;
    node2->left = node5;
    node5->left = nullptr;
    node5->right = nullptr;

    Node* node6 = new Node();
    node6->data = 69;
    node6->left = nullptr;
    node6->right = nullptr;
    node2->right = node6;

    root->left = node1;
    root->right = node2;  
    
    cout<<size(root)<<endl;

    return 0;
}


