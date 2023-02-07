//checking whether the tree is a BST or not
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
void checkBST(struct node * root){
         vector<int> v1;
         inorder(root,v1);
         int ans = 0;
         if(root == NULL){
            cout<<"YES ,its a BST !"<<endl;
            return;
         }
         for(int i=0;i<v1.size()-1;i++){
            if(v1[i+1]<=v1[i]){
                ans = 1;
                break;
            }
         }
         if(ans==1){
            cout<<"NO ,its not a BST !"<<endl;
         }
         else{
            cout<<"YES ,its a BST !"<<endl;
         }
}
int main(){
    struct node * root = new struct node;
    struct node * one = new struct node;
    struct node * two = new struct node;
    struct node * three = new struct node;
    struct node * four = new struct node;
    root->key = 20;
    root->left = one;
    root->right = two;
    one->key =8;
    one->left = NULL;
    one->right = NULL;
    two->key = 30;
    two->left = three;
    two->right = four;
    three->key = 18;
    three->left = NULL;
    three->right = NULL;
    four->key = 35;
    four->left = NULL;
    four->right = NULL;
    checkBST(root);
    return 0;
}