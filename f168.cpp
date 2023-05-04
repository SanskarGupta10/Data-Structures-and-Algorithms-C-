#include<bits/stdc++.h>
using namespace std;
 int res = 0;
struct trienode{
struct trienode * child[2];
bool isEnd;
    trienode(){
        isEnd=false;
        child[0]=NULL;
        child[1]=NULL;
    }
};
void insertTrie(struct trienode*root,vector<int> &v){
   struct trienode * curr = root;
   for(int i=0;i<v.size();i++){
      int index = v[i];
      if(curr->child[index] == NULL){
      curr->child[index] = new trienode();
      }
      curr = curr->child[index];
   }
   curr->isEnd = true;
}
bool search(struct trienode*root,vector<int> &ptr){
   struct trienode * curr = root;
    for(int i=0;i<ptr.size();i++){
        int ind = ptr[i];
        if(curr->child[ind]==NULL){
            return false;
        }
        curr = curr->child[ind];
    }
    return curr->isEnd;
}
void printTrie(struct trienode * root,vector<int> &s){
if(root->isEnd == true){
       res++;
       s.push_back(0);
       return;
    }
   for(int i=0;i<2;i++){
         if(root->child[i] != NULL){
             printTrie(root->child[i],s);
              }
   }
}
//counting distinct rows in the binary matrix using trie
void countDr(struct trienode * root,vector<int> ad[],int v){
    //inserting all the rows
    for(int i=0;i<v;i++){
        insertTrie(root,ad[i]);
    }
    vector<int> a;
    printTrie(root,a);
    cout<<"Distinct rows in a binary matrix := "<<a.size()<<endl;

    }
int main(){
    int v,size;
    cout<<"Enter v ?"<<endl;
    cin>>v;
    cout<<"Enter size ?"<<endl;
    cin>>size;
    vector<int>*ad = new vector<int>[v];
    for(int i=0;i<v;i++){
        for(int j=0;j<size;j++){
            int x;
            cout<<"Enter value ?"<<endl;
            cin>>x;
            ad[i].push_back(x);
        }
    }
    struct trienode * root = new trienode();
    
    countDr(root,ad,v);
    

    return 0;
}