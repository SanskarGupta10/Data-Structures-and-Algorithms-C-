#include<bits/stdc++.h>
using namespace std;

struct node {
int key;
struct node * left;
struct node * right;

};
void spiraltrav(struct node * root){
  
  if(root == NULL){
    return;
  }
  stack<struct node *> s1,s2;
  s1.push(root);
   while(s1.empty()==false || s2.empty()==false){
    while(s1.empty()==false){
        struct node * curr = s1.top();
       s1.pop();
       cout<<curr->key<<" ";
       if(curr->left != NULL){
        s2.push(curr->left);
       }
       if(curr->right!=NULL){
        s2.push(curr->right);
       }
    }
    while(s2.empty()==false){
        struct node * curr = s2.top();
       s2.pop();
       cout<<curr->key<<" ";
       
       if(curr->right!=NULL){
        s1.push(curr->right);
       }
       if(curr->left != NULL){
        s1.push(curr->left);
       }
    }

   }
}
int main(){
 struct node * root = new struct node;
    struct node * f = new struct node;
     struct node * s = new struct node;
     struct node * one = new struct node;
     struct node * two = new struct node;
     struct node * three = new struct node;
     struct node * four = new struct node;
     root->key = 10;
     f->key = 20;
     s->key = 30;
     one->key = 40;
     two->key = 50;
     three->key =60;
     four->key =70;
     root->left = f;
     root->right = s;
     f->left = NULL;
     f->right = NULL;
     s->left = one;
     s->right = two;
    one->left = three;
     one->right = four;
      two->left = NULL;
     two->right = NULL;
     three->left = NULL;
     three->right = NULL;
     four->left = NULL;
     four->right = NULL;
     spiraltrav(root);
    return 0;
}