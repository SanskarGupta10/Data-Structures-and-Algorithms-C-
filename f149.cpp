//bfs graph efficient solution
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
void bfseff(vector<int> ad[],int s,bool visited[]){
      visited[s] = true;
      queue<int> q;
      q.push(s);
      while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
         for(int x:ad[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
         }
      }
   
}

void bfsrec(vector<int> ad[],int v){
int count = 0;
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
          count++;
          bfseff(ad,i,visited);
        }
    }
     cout<<endl<<"Total disconnected graph present in the main graph := "<<count<<endl;

}
int main(){
    int v=7;
    vector<int> ad[v];
    insertGraph(ad,0,1);
    insertGraph(ad,1,3);
    insertGraph(ad,3,2);
    insertGraph(ad,0,2);
    insertGraph(ad,4,5);
    insertGraph(ad,4,6);
    insertGraph(ad,5,6);
    printGraph(ad,v);
    bfsrec(ad,v);
    return 0;
}