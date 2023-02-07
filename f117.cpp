#include<bits/stdc++.h>
using namespace std;
struct node{
 int key;
 struct node * right;
 struct node * left;
};

int height(struct node * root){
    if(root == NULL){
        return 0;
    }

    return max(height(root->left),height(root->right))+1;
}

bool checkBal(struct node * root){
  if(root == NULL){
    return true;
  }
  int rh = height(root->right);
  int lh = height(root->left);
  return (abs(lh - rh)<=1 && checkBal(root->right) && checkBal(root->left));

}
int isBalanced(struct node * root){
  if(root == NULL){
    return 0;
  }
    int lh = isBalanced(root->left);
    if(lh == -1){
        return -1;
    }
    int rh = isBalanced(root->right);
    if(rh == -1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    else{
        return max(lh,rh)+1;
    }
    //-1 will represent not balanced but 0 will represent the tree balanced by the height
}
int main(){
   struct node * root = new struct node;
    struct node * f = new struct node;
     struct node * s = new struct node;
     root->key = 23;
     f->key = 45;
     s->key = 87;
     root->left = f;
     root->right = NULL;
     f->left = s;
     f->right = NULL;
     s->left = NULL;
     s->right = NULL;
            if(checkBal(root)){
        cout<<"This tree is Balanced by the height "<<endl;
       }
       else{
        cout<<"This tree is not balanced by the height "<<endl;
       }
       cout<<isBalanced(root)<<endl;
    return 0;
}