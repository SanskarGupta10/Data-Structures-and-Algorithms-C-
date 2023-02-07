//graphs
#include<bits/stdc++.h>
using namespace std;
//breadth first search for the graphs

void bfs(vector<int> ad[],int s,int v){
     bool visited[v];
     for(int i=0;i<v;i++){
        visited[i] = false;
     }
     queue<int> q;
     q.push(s);
     visited[s]= true;
     while(q.empty()==false){
        int u = q.front();
         q.pop();
         cout<<u<<" ";
         for(int x : ad[u]){
            if(visited[x]==false){
                visited[x] = true;
                q.push(x);
            }
         }
     }

}
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

int main(){
      int v=4;
      vector<int> ad[4];
      insertGraph(ad,0,1);
      insertGraph(ad,0,2);
      insertGraph(ad,1,2);
      insertGraph(ad,1,3);
      printGraph(ad,v);
      bfs(ad,0,v);

    return 0;
}