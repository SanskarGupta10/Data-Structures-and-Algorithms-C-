//disjoint set
#include<bits/stdc++.h>
using namespace std;
//very basic ques of disjoint sets

void disjoint(int v,int parent[]){
    for(int i=0;i<v;i++){
        //initially every set is a set of itself.
        parent[i]=i;
        
    }
}
int findS(int x,int parent[]){
   if(parent[x]==x){
    return x;
   }
   else if(parent[x]!= x){
    parent[x] = findS(parent[x],parent);
   }
   return parent[x];
}
void unionS(int a,int b,int parent[]){
    int x = findS(a,parent);
    int y = findS(b,parent);
    if(x == y){
        return;
    }
    parent[b] = a; 
}
bool areFriends(int a,int b,int parent[]){
       return (findS(a,parent)==findS(b,parent));
}
void makeFriends(int a,int b,int parent[]){
     unionS(a,b,parent);
}
int main(){
int v=4;
int parent[v];
int rank[v];
disjoint(v,parent);
makeFriends(0,1,parent);
makeFriends(1,3,parent);
cout<<areFriends(0,2,parent)<<" ";
cout<<areFriends(0,1,parent)<<" ";
cout<<areFriends(0,3,parent)<<endl;
    return 0;
}