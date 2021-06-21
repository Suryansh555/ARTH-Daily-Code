#include <bits/stdc++.h>
using namespace std;


struct Node
{
    struct Node *left, *right;
    char key;
};

Node* newNode(char key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

Node* LowestCommonManager(Node *root , Node *n1 , Node *n2 ){
    if(root == NULL){
        return NULL ;
    }
    if(root == n1 || root == n2 ){
        return root;
    }
    Node * left = LowestCommonManager((root -> left) , n1 , n2);
    Node * right = LowestCommonManager((root -> right) ,n1 , n2);
    if(left != NULL && right != NULL){
        return root;
    }
    if(left == NULL && right == NULL){
        return NULL;
    }
    return left != NULL ? left : right ;
}

int main(){
    Node* root = newNode('A');
    root -> left = newNode('B');
    root -> right = newNode('C');
    root -> left -> left = newNode('D');
    root -> left -> right = newNode('E');
    root -> left -> left -> left = newNode('H');
    root -> left -> left -> right = newNode('I');
    root -> right -> left = newNode('F');
    root -> right -> right = newNode('G');
    Node* found = LowestCommonManager(root , root -> left -> right , root -> left -> left -> right );
    cout << found -> key ;




}