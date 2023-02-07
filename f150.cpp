//dfs efficient approach in graphs
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
void dfsrec(vector<int> ad[],int i,bool visited[]){
    visited[i]=true;
    cout<<i<<" ";
    for(int x:ad[i]){
        if(visited[x]==false){
            dfsrec(ad,x,visited);
        }
    }
}
void dfseff(vector<int> ad[],int v){
    int count = 0;
  bool visited[v];
  for(int i=0;i<v;i++){
    visited[i]=false;
  }
  for(int i=0;i<v;i++){
    if(visited[i]==false){
        dfsrec(ad,i,visited);
        count++;
    }
  }
   cout<<endl<<"Total number of disconnected graphs in a single graph are := "<<count<<endl;
}

int main(){
  int v = 7;
  vector<int> ad[v];
  insertGraph(ad,0,1);
  insertGraph(ad,1,2);
  insertGraph(ad,2,3);
  insertGraph(ad,0,4);
  insertGraph(ad,4,5);
  insertGraph(ad,4,6);
  insertGraph(ad,5,6);
  printGraph(ad,v);
  dfseff(ad,v);

    return 0;
}