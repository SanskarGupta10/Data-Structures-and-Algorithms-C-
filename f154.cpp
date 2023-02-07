//shortest path in a directed acyclic graph self made
#include<bits/stdc++.h>
using namespace std;
const int n = 4;
void insertGraph(vector<int> ad[],int a,int b){
    ad[a].push_back(b);
    ad[b].push_back(a);
}
void insertGDir(vector<int> ad[],int a,int b){
    ad[a].push_back(b);
}
void printGraph(vector<int> ad[],int v){
    for(int i=0;i<v;i++){
        for(int x : ad[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void insertDWeight(vector<int> ad[],int weight[n][n],int a,int b,int d){
          ad[a].push_back(b);
          weight[a][b] = d;
}
void shortestPAdg(vector<int> ad[],int weight[n][n],int v,int s){
    bool visited[v];
    int dist[v];
    //creating visited array
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    //creating and initializing distance array
    for(int i=0;i<v;i++){
        dist[i] = INFINITY;
    }
     queue<int> q;
     q.push(s);
     visited[s]= true;
     dist[s]=0;
     while(q.empty()==false){
        int u = q.front();
        q.pop();
        for(int x : ad[u]){
            if(visited[x]==false){
                visited[x]=true;
                dist[x] = dist[u] + weight[u][x];
                q.push(x);
            }
            else if(dist[x]>dist[u]+weight[u][x]){
                 dist[x] = dist[u]+weight[u][x];
            }
        }
     }
   //printing the distance array
   for(int i=0;i<v;i++){
    cout<<dist[i]<<" ";
   }

}
int main(){
  int v = 4;
  vector<int> ad[v];
   int weight[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        weight[i][j] = INFINITY;
    }
  }
  insertDWeight(ad,weight,0,1,1);
  insertDWeight(ad,weight,1,2,3);
  insertDWeight(ad,weight,2,3,4);
  insertDWeight(ad,weight,1,3,2);
  printGraph(ad,v);
  cout<<"Shortest path array in a directed weighted graph from the given source is := "<<endl;
  shortestPAdg(ad,weight,v,1);
 
    return 0;
}