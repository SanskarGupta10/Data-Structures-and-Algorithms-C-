//trees Breadth First Search
#include<iostream>
#include<queue>
using namespace std;
struct node{
int key;
struct node * left;
struct node * right;
};

void levelOrder(struct node * root){
      if(root == NULL){
        return;
      }
    queue<struct node *> q;
    q.push(root);
    while(q.empty() == false){
      struct node * curr = q.front();
      q.pop();
      cout<<curr->key<<" ";
         if(curr->left != NULL){
            q.push(curr->left);
         }
         if(curr->right != NULL){
            q.push(curr->right);
         }
    }

}
void levelOrderLine(struct node * root){


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
       levelOrder(root);

    return 0;
}