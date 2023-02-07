//insertion in bsts
#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;
};
//tree Treaversal BFS
void trav(struct node * root){
    if(root == NULL){
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0;i<count;i++){
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
    cout<<"\n";
    }
    
}

//insert using recursion
struct node * insert(struct node * root ,int x){
if(root == NULL){
    root = new struct node;
    root->key = x;
    root->left = NULL;
    root->right = NULL;
}
else if(root->key == x){
   cout<<"This value could not insert in the BST ."<<endl;
}
else if(root->key > x){
    root->left = insert(root->left,x);
}
else if(root->key < x){
   root->right =  insert(root->right,x);
}
return root;
}
//deletion of the node self made approach
void deleting(struct node * root ,int x){
        vector<int> v;
        if(root == NULL){
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(q.empty()==false){
        struct node * curr = q.front();
        q.pop();
        v.push_back(curr->key);
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    int size = v.size();
    int * arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i] = v[i];
    }
    int c=-231;
    //now to check whether the lement is present in the tree or not
    for(int i=0;i<size;i++){
        if(arr[i]==x){
             c = i;
             break;  
        }
    }
    if(c==-231){
        cout<<"Element not present in the tree !"<<endl;
        return;
    }
    //now deleting the element
    for(int i=c;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    //now making the tree again
    
     root->key = arr[0];
     root->left = NULL;
     root->right = NULL;
    for(int i=1;i<size;i++){
        struct node * curr = insert(root,arr[i]);
    }
      
}
int main(){
//This is the Binary Search Tree
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
        
        deleting(root,20);
        deleting(root,180);
        trav(root);
    return 0;
}