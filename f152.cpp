//detect cycle in an undirected graph using DFS
#include<bits/stdc++.h>
using namespace std;
void insertGraph(vector<int> ad[],int a,int b){
    ad[a].push_back(b);
    ad[b].push_back(a);
}
void printGraph(vector<int> ad[],int v){
    for(int i=0;i<v;i++){
        for(int x : ad[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
bool useDfs(vector<int> ad[],int i,bool visited[],int parent){
      visited[i] = true;
      for(int x : ad[i]){
        if(visited[x] == false){
             if(useDfs(ad,x,visited,i)==true){
                return true;
             }
        }
        else if(x != parent){
              return true;
        }
      }
   return false;
}
bool detectCycle(vector<int> ad[],int v){
     bool visited[v];
     for(int i=0;i<v;i++){
        visited[i] = false;
     }
     for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(useDfs(ad,i,visited,-1)){
                return true;
            }
        }
     }
     return false;
}


int main(){
   int v = 3;
   vector<int> ad[v];
   insertGraph(ad,0,1);
   insertGraph(ad,1,2);
   printGraph(ad,v);
   cout<<detectCycle(ad,v)<<endl;
    return 0;
}