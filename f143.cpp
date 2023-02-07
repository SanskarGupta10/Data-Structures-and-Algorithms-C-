#include<bits/stdc++.h>
using namespace std;
//pair with given sum in the bst.
struct node{
int key;
struct node * left;
struct node * right;
};

void inorder(struct node * root,vector<int> &v){
      if(root != NULL){
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right,v);
      }
}
//naive approach
void fpairWithSum(struct node * root,int sum){
      vector<int> v;
      inorder(root,v);
      sort(v.begin(),v.end());
      int f = 0;
      int r = v.size()-1;
      int dec = 0;
      while(f<v.size() && r>=0){
        if((v[r] + v[f])==sum){
            cout<<"YES ,There is a pair ("<<v[f]<<","<<v[r]<<") with sum "<<sum<<endl;
            dec = 1;
            break;
        }
        else if((v[r] + v[f])<sum){
              f++;
        }
        else if((v[r] + v[f])>sum){
               r--;
        } 
      }
      if(dec == 0){
        cout<<"NO ,There is no pair with sum "<<sum<<endl;
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
     fpairWithSum(root,12);
    return 0;
}