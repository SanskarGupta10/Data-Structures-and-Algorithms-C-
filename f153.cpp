//topological sorting using dfs approach
#include<bits/stdc++.h>
using namespace std;
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
void dfsrec(vector<int> ad[],int i,bool visited[],stack<int> &s){
    visited[i]=true;
    for(int x : ad[i]){
        if(visited[x]==false){
            dfsrec(ad,x,visited,s);
        }
    }
      s.push(i);
}
void dfsTs(vector<int> ad[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    stack<int> s;
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            dfsrec(ad,i,visited,s);
        }
    }
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }

}


int main(){
    int v = 5;
    vector<int> ad[v];
    insertGDir(ad,0,1);
    insertGDir(ad,1,3);
    insertGDir(ad,3,4);
    insertGDir(ad,2,3);
    insertGDir(ad,2,4);
    printGraph(ad,v);
     dfsTs(ad,v);

    return 0;
}