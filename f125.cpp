#include<bits/stdc++.h>
using namespace std;
//serialization and deserialization of the binary tree either into string or an array

struct node{
    int key;
    struct node * left;
    struct node * right;
};

void serialization(struct node * root , vector<int> &v1){
   //we must need to take the reference of the vector.
   //very important approach we must know
   //-1 here represents the NULL node
  if(root == NULL){
   v1.push_back(-1);
   return;
  }
   v1.push_back(root->key);
   serialization(root->left,v1);
   serialization(root->right,v1);
}
int inx = 0;
struct node * des(vector<int> &arr){
      if(inx == arr.size()){
         return NULL;
      }
      int val = arr[inx];
      inx++;
      if(val == -1){
                return NULL;
      }
      struct node * root = new struct node;
      root->key = val;
      root->left = des(arr);
      root->right = des(arr);
      return root;
}
void preTrav(struct node * root){
   if(root != NULL){
      cout<<root->key<<" ";
      preTrav(root->left);
      preTrav(root->right);
   }
}
int main(){
     struct node * r = new struct node;
     struct node * o = new struct node;
     struct node * t = new struct node;
     r->key = 10;
     o->key = 20;
     t->key = 30;
     r->left = o;
     r->right = NULL;
     o->left = NULL;
     o->right = NULL;
      vector<int> arr;
      //serialization
 serialization(r,arr);
    for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    //deserialization
    struct node * root = des(arr);
    preTrav(root);
    return 0;
}