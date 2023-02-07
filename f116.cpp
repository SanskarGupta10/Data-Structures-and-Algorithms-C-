//size of the tree
#include<bits/stdc++.h>
using namespace std;
struct node{
 int key;
 struct node * right;
 struct node * left;
};

int findSize(struct node * root){
   if(root == NULL){
    return 0;
   }
   else{
   return 1+findSize(root->left)+findSize(root->right);
   }
}
 int getMax(struct node * root){
        if(root == NULL){
            return INT_MIN;
        }
        else{
        return max(root->key , max(root->left->key,root->right->key));
        }
 }
 int getMin(struct node * root){
    if(root == NULL){
        return INT_MAX;
    }
    else{
    return min(root->key , min(root->left->key,root->right->key));
    }
 }
 int seeMax(int * arr,int s){
    int max = INT_MIN;
    for(int i=0;i<s;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
 }
 int seeMin(int *arr,int s){
    int min = INT_MAX;
    for(int i=0;i<s;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
 }
 void maxEle(struct node * root){
    //use level order traversal 
    int size = findSize(root);
    int i=0;
    int * arr = new int[size];
    if(root == NULL){
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(q.empty()==false){
        struct node * curr = q.front();
        q.pop();
          arr[i]=curr->key;
          i++;
          if(curr->left != NULL){
            q.push(curr->left);
          }
          if(curr->right != NULL){
            q.push(curr->right);
          }
    }
    int hmax = seeMax(arr,size);
    cout<<"The biggest element in the tree is := "<<hmax<<endl;
 }
 void minEle(struct node * root){
    //use level order traversal 
    int size = findSize(root);
    int i=0;
    int * arr = new int[size];
    if(root == NULL){
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(q.empty()==false){
        struct node * curr = q.front();
        q.pop();
          arr[i]=curr->key;
          i++;
          if(curr->left != NULL){
            q.push(curr->left);
          }
          if(curr->right != NULL){
            q.push(curr->right);
          }
    }
    int hmin = seeMin(arr,size);
    cout<<"The smallest element in the tree is := "<<hmin<<endl; 
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
       int size = findSize(root);
       cout<<"The size of the binary tree is :- "<<size<<endl;
      
       maxEle(root);
       minEle(root);
    return 0;
}