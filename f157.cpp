//graph dijkstras algorithm
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
void printWeight(vector<int> weight[],int v){
    for(int i=0;i<v;i++){
        for(int x:weight[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void insertDWeight(vector<int> ad[],vector<int> weight[],int a,int b,int d){
          ad[a].push_back(b);
          ad[b].push_back(a);
          weight[a][b] = d;
          weight[b][a]=d;
}
void shortestPAdg(vector<int> ad[],vector<int> weight[],int v,int s){
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
     int v;
     cout<<"Enter value of v ?"<<endl;
     cin>>v;
     vector<int>*ad = new vector<int>[v];
     vector<int>*weight = new vector<int>[v];
     for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            weight[i].push_back(INFINITY);
        }
     }
     insertDWeight(ad,weight,0,1,5);
     insertDWeight(ad,weight,0,2,10);
     insertDWeight(ad,weight,1,2,3);
     insertDWeight(ad,weight,1,3,20);
     insertDWeight(ad,weight,2,3,2);
     
     printGraph(ad,v);
     cout<<endl;
     printWeight(weight,v);
     cout<<endl;
     cout<<"The Shortest path from source to all the vertices using dijkstras algorithms are :="<<endl;

    shortestPAdg(ad,weight,v,0);
    return 0;
}