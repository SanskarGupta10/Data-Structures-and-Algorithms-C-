//disjoint set solving union and find function using rank it helps to reduce the time taken and the height of the disjoint tree remains very optimal and less
#include<bits/stdc++.h>
using namespace std;
void disjoint(int v,int parent[],int rank[]){
    for(int i=0;i<v;i++){
        //initially every set is a set of itself.
        parent[i]=i;
        rank[i] = 0;
    }
}
int findS(int x,int parent[]){
    //its a find function with path compression
   if(parent[x]==x){
    return x;
   }
   else if(parent[x]!= x){
    parent[x] = findS(parent[x],parent);
   }
   return parent[x];
}
void unionS(int x,int y,int parent[],int rank[]){
    int a = findS(x,parent);
    int b = findS(y,parent);
    if(rank[a]<rank[b]){
      parent[a] = b;
   }
   else if(rank[a]>rank[b]){
    parent[b] = a;
   }
   else{
 //rank increases if the same rank
    parent[b] = a;
    rank[a]++;
   }
}

int main(){
    int v = 5;
    int parent[v];
    int rank[v];
    disjoint(v,parent,rank);
    unionS(3,4,parent,rank);
    unionS(2,3,parent,rank);
    unionS(1,2,parent,rank);
    unionS(0,1,parent,rank);
    //printing the rank and parent array
    for(int i=0;i<v;i++){
        cout<<parent[i]<<" "<<rank[i]<<endl;
    }
    return 0;
}