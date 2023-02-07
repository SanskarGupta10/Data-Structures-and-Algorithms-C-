#include<bits/stdc++.h>
using namespace std;
//finding the lowest common ancestor.
struct node {
int key;
struct node * left;
struct node * right;
};

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
    return 0;
}