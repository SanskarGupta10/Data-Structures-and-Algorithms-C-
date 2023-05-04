#include<bits/stdc++.h>
using namespace std;
// Trie Data Structure
int f=0;
struct trienode{
  struct trienode * child[26];
  bool isEnd;
   trienode(){
    isEnd = false;
    for(int i=0;i<26;i++){
        child[i] = NULL;
    }
   }
  
};

//insertion in a trie node
void insertTrie(string ptr,struct trienode*root){
   struct trienode * curr = root;
   for(int i=0;i<ptr.size();i++){
      int index = ptr[i]-'a';
      if(curr->child[index] == NULL){
      curr->child[index] = new trienode();
      }
      curr = curr->child[index];
   }
   curr->isEnd = true;
}
//searching in a trie
bool search(string ptr,struct trienode*root){
   struct trienode * curr = root;
    for(int i=0;i<ptr.size();i++){
        int ind = ptr[i]-'a';
        if(curr->child[ind]==NULL){
            return false;
        }
        curr = curr->child[ind];
    }
    return curr->isEnd;
}
//finding whether the particular trie node is empty or not
bool isEmpty(struct trienode * root){
     for(int i=0;i<26;i++){
        if(root->child[i] != NULL){
            return false;
        }
     }
     return true;
}
//deletion in a trie
void deleteTrie(struct trienode * root,string str,int i=0){
    if(i==str.size()){
        return;
    }   
       struct trienode * curr = root;
       char ch = str[i];
       int ind = ch - 'a';
       if(curr->child[ind] != NULL){
        deleteTrie(curr->child[ind],str,i+1);
       }
       
       if(isEmpty(curr->child[ind]) == false && curr->child[ind]->isEnd == true){
              curr->child[ind]->isEnd = false;
              
       }
       else if(isEmpty(curr->child[ind])==true && curr->child[ind]->isEnd == true){
        if(curr->isEnd == true){
          curr->child[ind] = NULL;
          f=1;
        }
        else if(curr->isEnd == false && f==0){
            curr->child[ind]=NULL;
        }
       }
}
//supporting trie delete function.
void supportDelTrie(struct trienode * root , string str){
    if(search(str,root)==false){
        cout<<"String is not present in this trie !"<<endl;
    }
    else{
   deleteTrie(root,str,0);
    }
}


//print the entire trie
void printTrie(struct trienode * root,string str){
    if(root->isEnd == true ){
         cout<<str<<endl;
    }
   for(int i=0;i<26;i++){
         if(root->child[i] != NULL){
             int ind = i + 'a';
             char ch = (char)ind;
             printTrie(root->child[i],str+ch);
         }
   }
}
int main(){
     struct trienode * root = new trienode();
      insertTrie("bad",root);
      insertTrie("bat",root);
      insertTrie("cat",root);
      insertTrie("cut",root);
      insertTrie("geek",root);
      insertTrie("geeks",root);
      insertTrie("zoo",root);
      printTrie(root,"");
      
      supportDelTrie(root,"cut");
      cout<<endl;
      printTrie(root,"");
    return 0;
}