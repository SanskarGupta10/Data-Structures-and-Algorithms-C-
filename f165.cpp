//Kruskal algorithm
#include<bits/stdc++.h>
using namespace std;
struct Edge{
int src;
int des;
int wt;
Edge(int s,int d,int w){
   src = s;
   des = d;
   wt = w;
}
};
bool myCmp(Edge e1 , Edge e2){
    if(e1.wt<e2.wt){
        return true;
    }
    return false;
}
void makeSet(int parent[],int rank[],int v){
    for(int i=0;i<v;i++){
        rank[i]=0;
        parent[i] = i;
    }
}
int findParent(int parent[],int comp){
    if(parent[comp]==comp){
        return comp;
    }
    else if(parent[comp]!=comp){
        parent[comp] = findParent(parent,parent[comp]);
    }
    return parent[comp];
}
void unionSet(int a,int b,int parent[],int rank[]){
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
void printGraphE(Edge * arr,int e){
   for(int i=0;i<e;i++){
        cout<<"Edge from "<<arr[i].src<<" to "<<arr[i].des<<" having weight "<<arr[i].wt<<endl;
    }
}

void kruskal(Edge * arr,int e,int v){
    int parent[v];
    int rank[v];
    makeSet(parent,rank,v);
    //sorting all the edges in kruskal algorithm
    sort(arr,arr+e,myCmp);
    cout<<"The sorted edges are := "<<endl;
    printGraphE(arr,e);
    cout<<endl;
    int l = 0;
    int s = 0;
    int res = 0;
    while(s<v-1 && l<e){
        Edge e = arr[l];
    int x = findParent(parent,e.src);
    int y = findParent(parent,e.des);
    if(x != y){
        res = res + arr[l].wt;
        unionSet(x,y,parent,rank);
        s++;
    }
      l++;
    }
    cout<<"The length of minimum spanning tree is := "<<res<<endl;
}
int main(){
   //creating the graph
   int v = 5;
   int e = 7;
   Edge * arr;
    arr[0] = Edge(1,2,3);
     arr[1] = Edge(0,2,5);
      arr[2] = Edge(2,4,12);
       arr[3] = Edge(3,4,10);
        arr[4] = Edge(1,3,8);
         arr[5] = Edge(2,3,7);
          arr[6] = Edge(0,1,6);
   printGraphE(arr,e);
   kruskal(arr,e,v);
    return 0;
}