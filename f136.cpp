//Binary search trees
#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;
};
 
 //making recursive search operation self made
 bool search(struct node * root ,int x){
    if(root == NULL){
        return false;
    }
    if(root->key == x){
        return true;
    }
    else if(root->key<x){
        search(root->right,x);
    }
    else if(root->key>x){
        search(root->left,x);
    }
    
 }
 //iterative search operation
 bool searching(struct node * root,int x){
     while(root != NULL){
        if(root->key == x){
            return true;
        }
        else if(root->key<x){
            root = root->right;
        }
        else if(root->key>x){
            root = root->left;
        }
     }
     return false;
 }
int main(){
     struct node * root = new struct node;
     struct node * one = new struct node;
     struct node * two = new struct node;
     struct node * three = new struct node;
     struct node * four = new struct node;
     struct node * five = new struct node;
     struct node * six = new struct node;
       root->key = 15;
       root->left = one;
       root->right = two;
       one->key = 5;
       one->left = three;
       one->right = NULL;
       two->key =20;
       two->left = four;
       two->right = five;
       three->key = 3;
       three->left = NULL;
       three->right = NULL;
       four->key = 18;
       four->left = six;
       four->right = NULL;
       five->key = 80;
       five->left = NULL;
       five->right = NULL;
       six->key = 16;
       six->left = NULL;
       six->right = NULL;
       if(searching(root,13)){
          cout<<"Element found !"<<endl;
       }
       else{
        cout<<"Element not found !"<<endl;
       }
    return 0;
}