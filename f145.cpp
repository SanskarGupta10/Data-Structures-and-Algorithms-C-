//vertical traversal of the bst
#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;
};
//efficient solution by gfg
void vTrav(struct node * root){
   if(root == NULL){
    return;
   }
   map<int,vector<int>> mp;
   queue<pair<struct node *,int>> q;
   q.push({root,0});
   while(q.empty()==false){
     auto p = q.front();
     struct node * curr = p.first;
     int hd = p.second;
     mp[hd].push_back(curr->key);
     q.pop();
     if(curr->left != NULL){
      q.push({curr->left,hd-1});
     }
     if(curr->right != NULL){
      q.push({curr->right,hd+1});
     }
   }
   //now print the contents of map
   for(auto p : mp){
          vector<int> v = p.second;
          for(int x : v){
            cout<<x<<" ";
          }
       cout<<endl;
   }
}

int main(){
struct node * root = new struct node;
     struct node * one = new struct node;
     struct node * two = new struct node;
     struct node * three = new struct node;
     struct node * four = new struct node;
     struct node * five = new struct node;
     struct node * six = new struct node;
       root->key = 60;
       root->left = one;
       root->right = two;
       one->key = 8;
       one->left = three;
       one->right = four;
       two->key =80;
       two->left = five;
       two->right = six;
       three->key = 4;
       three->left = NULL;
       three->right = NULL;
       four->key = 10;
       four->left = NULL;
       four->right = NULL;
       five->key = 20;
       five->left = NULL;
       five->right = NULL;
       six->key = 100;
       six->left = NULL;
       six->right = NULL;
       vTrav(root); 
    return 0;
}