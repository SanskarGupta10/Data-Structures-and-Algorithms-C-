#include<bits/stdc++.h>
using namespace std;
//converting a binary tree to doubly linked list
//node is for linked list node
struct node{
int data;
struct node * next;
struct node * prev;
};
//key is used for the tree node
struct key{
  int value;
  struct key * left;
  struct key * right;
};
void lTrav(struct node * head){
    struct node * ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

struct node * btToll(struct key * root){
   //we are performing the iterative inorder traversal of the tree
   vector<int> v1;
   stack<struct key *> s;
   struct key * curr = root;
   while(curr != NULL || s.empty()==false){
 while(curr != NULL){
       s.push(curr);
        curr = curr->left;
    }
    curr = s.top();
      s.pop();
      v1.push_back(curr->value);
      curr = curr->right;
   }
   int size = v1.size();
   cout<<"The size of the linked list is := "<<size<<endl;
     struct node * arr[size];
     for(int j=0;j<size;j++){
        arr[j] = new struct node;
     }
     arr[0]->prev = NULL;
     arr[0]->next = arr[1];
     arr[0]->data = v1[0];
     for(int i=1;i<v1.size()-1;i++){
        
        arr[i]->prev = arr[i-1];
        arr[i]->next = arr[i+1];
        arr[i]->data = v1[i];
     }
     arr[v1.size()-1]->prev = arr[v1.size()-2];
      arr[v1.size()-1]->next = NULL;
       arr[v1.size()-1]->data = v1[v1.size()-1];
    return arr[0];
}

int main(){
   struct key * r = new struct key;
    struct key * one = new struct key;
     struct key * two = new struct key;
      struct key * three = new struct key;
       r->value = 5;
       one->value=8;
       two->value = 19;
       three->value =6;
       r->left = one;
       r->right = two;
       one->left = NULL;
       one->right = NULL;
       two->left = three;
       two->right = NULL;
       three->left = NULL;
       three->right = NULL;
       struct node * head =  btToll(r);
       lTrav(head);
    return 0;
}