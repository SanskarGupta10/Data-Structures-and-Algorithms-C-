#include<bits/stdc++.h>
using namespace std;
//iterative inorder , preorder and postorder tree traversals
struct node{
int key;
struct node * left;
struct node * right;
};
//iterative inorder
void itInorder(struct node * root){
   stack<struct node *> s;
   struct node * curr = root;
   cout<<"The inorder traversal is := "<<endl;
   while(curr != NULL || s.empty()==false){
       while(curr != NULL){
         s.push(curr);
         curr = curr->left;
       }
       curr = s.top();
       s.pop();
       cout<<curr->key<<" ";
       curr = curr->right;
   }
   cout<<endl;
}
//iterative preorder
void itPreorder(struct node * root){
    if(root == NULL){
        return ;
    }
    stack<struct node *> s;
    s.push(root);
    cout<<"The preorder traversal is := "<<endl;
    while(s.empty()==false){
        struct node * curr = s.top();
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right != NULL){
            s.push(curr->right);
        }
        if(curr->left != NULL){
            s.push(curr->left);
        }
    }
    cout<<endl;
}
//iterative postorder self logic
void itPostorder(struct node * root){
if(root == NULL){
    return;
}
stack<struct node *> s;
s.push(root);
vector<int> v1;
cout<<"The postorder traversal is := "<<endl;
while(s.empty()==false){
    struct node * curr = s.top();
    v1.push_back(curr->key);
    s.pop();
    if(curr->left != NULL){
        s.push(curr->left);
    }
    if(curr->right != NULL){
        s.push(curr->right);
    }
}
   reverse(v1.begin(),v1.end());
   for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
}
int main(){
    struct node * r = new struct node;
    struct node * one = new struct node;
    struct node * two = new struct node;
    struct node * three = new struct node;
    struct node * four = new struct node;
    struct node * five = new struct node;
    r->key = 10;
    one->key = 20;
    two->key = 30;
    three->key = 40;
    four->key = 50;
    five->key = 60;
  r->left = one;
  r->right = two;
  one->left = three;
  one->right = four;
  two->left=five;
  two->right = NULL;
  three->left = NULL;
  three->right = NULL;
  four->left = NULL;
  four->right = NULL;
  five->left = NULL;
  five->right = NULL;
  itPreorder(r);
  itPostorder(r);
  itInorder(r);
    return 0;
}