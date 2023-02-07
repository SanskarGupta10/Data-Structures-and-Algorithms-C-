//shortest path in an unweighted graph
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
void spath(vector<int> ad[],int v,int s){
    int dist[v];
    for(int i=0;i<v;i++){
        dist[i] = INFINITY;
    }
    //creating a boolean visited array
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        for(int x : ad[u]){
            if(visited[x]==false){
                dist[x] = dist[u] + 1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
    //printing the distance array
    cout<<"The dist array is given below from each vertex := "<<endl;
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
}
int main(){
int v = 4;
vector<int> ad[v];
insertGraph(ad,0,1);
insertGraph(ad,1,2);
insertGraph(ad,2,3);
insertGraph(ad,1,3);
insertGraph(ad,0,2);
printGraph(ad,v);
spath(ad,v,0);
    return 0;
}