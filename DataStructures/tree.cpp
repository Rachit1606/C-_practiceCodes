#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

void preOrder(Node *root) {
        if(root == NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);

    }

void postOrder(Node *root) {
        if(root==NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }

void inOrder(Node *root) {
        if(root == NULL){
            return;
        }
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    
	//int lheight = -1;
    //int rheight = -1;
int height(Node* root) {
        // Write your code here.
        if(root == NULL){
            return -1;
        }
        else{
            int lheight = height(root->left);
            int rheight = height(root->right);
            
            if(lheight > rheight){
                return lheight+1;
            }
            else{
                return rheight+1;
            }
        }
}
 void levelOrder(Node * root) {
        if(root == NULL) return;
        
        queue<Node*> q;
        q.push(root);
        while(q.empty() == false){
            Node* node = q.front();
            cout<<node->data<<" ";
            q.pop();
            
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
 Node *lca(Node *root, int v1,int v2) {
        if(root==NULL)
            return NULL;
            
        if(root->data > v1 && root->data > v2)
            return lca(root->left,v1,v2);
        if(root->data < v1 && root->data < v2)
            return lca(root->right, v1,v2);
            
            
        return root;
		// Write your code here.
    }

Node* CreateNode(int data){
        Node* newNode = (Node*)malloc(sizeof(Node));
        if(!newNode){
            return NULL;
        }
        newNode->data = data;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    Node* insert(Node * root, int data) {
        if(root == NULL){
            root = CreateNode(data);
            return root;
        }    
       if(data<root->data){
           root->left = insert(root->left, data);
       }
       else{
           root->right = insert(root->right, data);
       }
       return root;
    }
int main(){
	return 0;
}
    
