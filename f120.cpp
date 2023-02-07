#include<bits/stdc++.h>
using namespace std;
//finding the diameter of the binary tree

struct node{
int key;
struct node * left;
struct node * right;
};

int height(struct node * root){
  if(root == NULL){
    return 0;
  }
  return 1+max(height(root->left),height(root->right));

}
int diameter(struct node * root){
    if(root == NULL){
        return 0;
    }
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d2,d3));
}
int main(){
    struct node * root = new struct node;
    struct node * f = new struct node;
     struct node * s = new struct node;
      struct node * t = new struct node;
       struct node * fo = new struct node;
       root->key = 1110;
       f->key = 20;
       s->key = 30;
       t->key = 40;
       fo->key = 500;
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
       cout<<"The diameter of this binary tree is := "<<diameter(root)<<endl;
    return 0;
}