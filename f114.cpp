//Trees introduction(Depth First Search)
#include<iostream>
#include<queue>
using namespace std;

struct node{
    int key;
    struct node * left;
    struct node * right;
};
void inorder(struct node * root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
   
}
void preorder(struct node * root){
  if(root != NULL){
     cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
   
  }
  
}
void postorder(struct node * root){
if(root!=NULL){
   
    postorder(root->left);
    postorder(root->right);
     cout<<root->key<<" ";
}

}
int main(){
   struct node * root = new struct node;
    struct node * f = new struct node;
     struct node * s = new struct node;
      struct node * t = new struct node;
       struct node * fo = new struct node;
       root->key = 10;
       f->key = 20;
       s->key = 30;
       t->key = 40;
       fo->key = 50;
       root->left=f;
       root->right=s;
       f->left=NULL;
       f->right=NULL;
       s->left=t;
       s->right=fo;
       t->left=NULL;
       t->right=NULL;
       fo->right=NULL;
       fo->left=NULL;
       inorder(root);
       cout<<"\n";
       preorder(root);
       cout<<"\n";
       postorder(root);
    return 0;
}