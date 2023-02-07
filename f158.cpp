//original dijkstras algorithm doubt
#include<bits/stdc++.h>
using namespace std;
void printGraph(vector<int> graph[],int ver){
    for(int i=0;i<ver;i++){
        for(int x:graph[i]){
              cout<<x<<" ";
        }
        cout<<endl;
     }
}
void dijkstras(vector<int> graph[],int v,int src){
    bool visited[v];
    int dist[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        dist[i]=INFINITY;
    }
    dist[src]=0;
    for(int count=0;count<v-1;count++){
        int u = -1;
        for(int i=0;i<v;i++){
            if(visited[i]==false && (u==-1 || dist[i]<dist[u])){
                u = i;
                visited[i]=true;
                
            }
        }
        
        for(int j=0;j<v;j++){
            if(visited[j]==false && graph[u][j]!=0){
                dist[j] = min(dist[j],dist[u]+graph[u][j]);
            }
        }
            
        
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
}
int main(){
int ver;
    cout<<"Enter the value of ver ?"<<endl;
    cin>>ver;
    //remember for dynamic memory allocation
     vector<int>*graph = new vector<int>[ver];
     int x;
     for(int i=0;i<ver;i++){
        for(int j=0;j<ver;j++){
            cout<<"Enter the value?"<<endl;
            cin>>x;
            graph[i].push_back(x);
        }
     }
     printGraph(graph,ver);
     dijkstras(graph,ver,1);


    return 0;
}