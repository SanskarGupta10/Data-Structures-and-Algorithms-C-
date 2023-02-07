//Fix Bst with two nodes swapped
#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;
};

void inorder(struct node * root,vector<int> &v){
      if(root != NULL){
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right,v);
      }
}
void levelOrder(struct node * root,vector<int> &v){
           if(root == NULL){
            return;
           }
           queue<struct node*> q;
           q.push(root);
           while(q.empty()==false){
                struct node * curr = q.front();
                q.pop();
                v.push_back(curr->key);
                if(curr->left != NULL){
                  q.push(curr->left);
                }
                if(curr->right != NULL){
                  q.push(curr->right);
                }
           }
}
struct node * insert(struct node * root,int x){
    if(root==NULL){
       root = new struct node;
       root->key = x;
       root->left = NULL;
       root->right = NULL;
    }
    else if(root->key == x){
      cout<<"No duplicate values allowed in the tree !"<<endl;
    }
    else if(root->key>x){
      root->left = insert(root->left,x);
    }
    else{
        root->right = insert(root->right,x);
    }
    return root;
}
void swapNodes(struct node * root){
   vector<int> v1,v2;
   levelOrder(root,v2);
   inorder(root,v1);
   int f,r;
   for(int i=0;i<v1.size();i++){
    if(v1[i+1]<v1[i]){
      f=i;
      break;
    }
   }
   //another loop 
 
   for(int i=v1.size()-1;i>0;i--){
    if(v1[i-1]>v1[i]){
    r = i;
    break;
    }
   }
   //another loop
  
   for(int j=0;j<v2.size();j++){
    if(v2[j]==v1[f] && ((v1[r]<v1[f+1]) && (v1[r]>v1[f-1]))){
      v2[j]=v1[r];
    }
    else if(v2[j]==v1[r] && ((v1[f]<v1[r+1]) && (v1[f]>v1[r-1]))){
        v2[j]=v1[f];
    }
   }
 
     root->key = v2[0];
     root->left = NULL;
     root->right = NULL;
     for(int k=1;k<v2.size();k++){
      struct node * curr = insert(root,v2[k]);
     }
}

int main(){
     vector<int> trav;
     vector<int> trav2;
       struct node * root = new struct node;
     struct node * one = new struct node;
     struct node * two = new struct node;
     struct node * three = new struct node;
     struct node * four = new struct node;
     struct node * five = new struct node;
     struct node * six = new struct node;
       root->key = 60;
       root->left = one;
       root->right = two;
       one->key = 8;
       one->left = three;
       one->right = four;
       two->key =80;
       two->left = five;
       two->right = six;
       three->key = 4;
       three->left = NULL;
       three->right = NULL;
       four->key = 10;
       four->left = NULL;
       four->right = NULL;
       five->key = 20;
       five->left = NULL;
       five->right = NULL;
       six->key = 100;
       six->left = NULL;
       six->right = NULL;
       cout<<"Inorder traversal of the tree before the operation := "<<endl;
       inorder(root,trav);
       for(int i=0;i<trav.size();i++){
        cout<<trav[i]<<" ";
       }
       cout<<endl;
       cout<<"Inorder traversal of the tree after the operation := "<<endl;
       swapNodes(root);
       inorder(root,trav2);
       for(int i=0;i<trav2.size();i++){
        cout<<trav2[i]<<" ";
       }
    return 0;
}