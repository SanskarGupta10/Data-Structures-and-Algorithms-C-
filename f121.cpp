#include<bits/stdc++.h>
using namespace std;
//counting the number of nodes in the binary tree.
struct node{
int key;
struct node * left;
struct node * right;
};

int countNodes(struct node * root){
   //we can use either bfs or dfs to count the number of nodes
   //in this case we are using the bfs
   vector<int> v1;
     if(root == NULL){
        return 0;
     }
     queue<struct node *> q;
     q.push(root);
     while(q.empty()==false){
        struct node * curr = q.front();
           v1.push_back(curr->key);
           q.pop();
           if(curr->left != NULL){
            q.push(curr->left);
           }
           if(curr->right != NULL){
            q.push(curr->right);
           }
     }
     return v1.size();
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
       cout<<"Number of nodes in the binary tree is := "<<countNodes(root)<<endl;
    return 0;
}