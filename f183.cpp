//child sum properties in a tree
#include<bits/stdc++.h>
using namespace std;
struct node{
int key;
struct node * left;
struct node * right;
};

bool childSum(struct node * root){
    int sum = 0;
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return true;
    }
    if(root->left != NULL){
    sum = sum + root->left->key;
    }
    if(root->right != NULL){
        sum = sum + root->right->key;
    }
    
    return (sum==root->key && childSum(root->left) && childSum(root->right));
    }
  


int main(){
    struct node * one = new struct node;
    struct node * two = new struct node;
    struct node * three = new struct node;
    struct node * four = new struct node;
    struct node * five = new struct node;
    struct node * six = new struct node;
    struct node * seven = new struct node;
    one->key = 10;
    two->key = 2;
    three->key = 8;
    four->key = 3;
    five->key = 5;
    six->key = 1;
    seven->key = 4;
    one->left = two;
    one->right = three;
    two->left = NULL;
    two->right = NULL;
    three->left = four;
    three->right = five;
    four->left = NULL;
    four->right = NULL;
    five->left = six;
    five->right = seven;
    six->left = NULL;
    six->right = NULL;
    seven->left = NULL;
    seven->right = NULL;
    cout<<childSum(one)<<endl;

    return 0;
}