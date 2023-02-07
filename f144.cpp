//vertical sum in a tree
#include<bits/stdc++.h>
using namespace std;
struct node{
int key;
struct node * left;
struct node * right;
};
//using map
void vSumR(struct node * root,int hd,map<int,int> &m){
    if(root==NULL){
        return;
    }
    vSumR(root->left,hd-1,m);
    m[hd] += root->key;
    vSumR(root->right,hd+1,m);
}
void vSum(struct node * root){
    map<int,int> m;
    vSumR(root,0,m);
    for(auto x:m){
        cout<<x.second<<" ";
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
       vSum(root);

    return 0;
}