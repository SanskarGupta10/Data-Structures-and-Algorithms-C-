//floor value in bst
#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
struct node * left;
struct node * right;
};
//naive solution for floor value
void floorBst(struct node * root,int x){
    vector<int> v1;
if(root == NULL){
    return;
}
queue<struct node *> q;
q.push(root);
while(q.empty()==false){
    struct node * curr = q.front();
    q.pop();
      v1.push_back(curr->key);
      if(curr->left != NULL){
          q.push(curr->left);
      }
      if(curr->right != NULL){
          q.push(curr->right);
      }
}
      sort(v1.begin(),v1.end());
      
      for(int i=0;i<v1.size()-1;i++){
          if(v1[i+1]>x){
                if(v1[i]<=x){
                    
                    cout<<"Node := "<<v1[i]<<endl;
                    break;
                }
                else if(v1[i]>x){
                    cout<<"NULL"<<endl;
                    break;
                }
          }
          else if(v1[i+1]==x){
              cout<<"Node := "<<v1[i+1]<<endl;
          }
      }

}
//naive solution for ceil value
void ceilBst(struct node * root,int x){
     vector<int> v1;
if(root == NULL){
    return;
}
queue<struct node *> q;
q.push(root);
while(q.empty()==false){
    struct node * curr = q.front();
    q.pop();
      v1.push_back(curr->key);
      if(curr->left != NULL){
          q.push(curr->left);
      }
      if(curr->right != NULL){
          q.push(curr->right);
      }
}
      sort(v1.begin(),v1.end());
      reverse(v1.begin(),v1.end());
      
      for(int i=0;i<v1.size()-1;i++){
          if(v1[i+1]<x){
                if(v1[i]>=x){
                    
                    cout<<"Node := "<<v1[i]<<endl;
                    break;
                }
                else if(v1[i]<x){
                    cout<<"NULL"<<endl;
                    break;
                }
          }
          else if(v1[i+1]==x){
              cout<<"Node := "<<v1[i+1]<<endl;
          }
      }
}

//efficient solution for floor bst by gfg using an iterative approach 
struct node * effBst(struct node * root,int x){
    struct node * curr = NULL;
     while(root != NULL){
          if(root->key == x){
            return root;
          }
          else if(root->key > x){
           root = root->left;
          }
          else{
           curr = root;
           root = root->right;
          }
     }
     return curr;
}
//efficient solution for the ceil value of the bst using an iterative approach
struct node * effCBst(struct node * root,int x){
    struct node * curr = NULL;
    while(root != NULL){
       if(root->key == x){
        return root;
       }
       else if(root->key < x){
        root = root->right;
       }
       else{
        curr = root;
        root = root->left;
       }
    }

 return curr;
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
       floorBst(root,80);
       struct node * ans = effBst(root,80);
       cout<<"Node := "<<ans->key<<endl;
        ceilBst(root,12);
        struct node * ceil = effCBst(root,12);
        cout<<"Node := "<<ceil->key<<endl;
    return 0;
}