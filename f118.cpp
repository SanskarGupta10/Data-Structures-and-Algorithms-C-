#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;

};
int height(struct node * root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
//finding the max width of the binary tree
int findWidth(struct node * root){
   
    
 if(root == NULL){
    return 0;
 }
 int res=0;
 queue<struct node *> q;
 q.push(root);
 while(q.empty()==false){
           int count = q.size();
           res = max(res,count);
     for(int i=0;i<count;i++){
           struct node * curr = q.front();
           q.pop();
           if(curr->left != NULL){
            q.push(root->left);
           }
           if(curr->right != NULL){
            q.push(curr->right);
           }
     }     
}
return res;
}
int main(){
   struct node * root = new struct node;
    struct node * f = new struct node;
     struct node * s = new struct node;
      struct node * t = new struct node;
       struct node * fo = new struct node;
       struct node * six = new struct node;
       struct node * sev = new struct node;
       root->key = 1110;
       f->key = 20;
       s->key = 30;
       t->key = 40;
       fo->key = 500;
       six->key = 60;
       sev->key = 90;
       root->left=f;
       root->right=s;
       f->left=NULL;
       f->right=six;
       s->left=t;
       s->right=fo;
       t->left=NULL;
       t->right=NULL;
       fo->right=NULL;
       fo->left=sev;
       six->left=NULL;
       six->right=sev;
       sev->left=NULL;
       sev->right=NULL;
    cout<<"The max width of the binary tree is := "<<findWidth(root)<<endl;


    return 0;
}