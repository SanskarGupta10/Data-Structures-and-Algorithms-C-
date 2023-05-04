//Tarzan's algorithm
#include<bits/stdc++.h>
using namespace std;
void insGraph(vector<int> ad[],int a,int b){
   ad[a].push_back(b);
   ad[b].push_back(a);
}
//insertion in the directed graph
void insDGraph(vector<int> ad[],int a,int b){
   ad[a].push_back(b);
}
//printing the graph
void printGraph(vector<int> ad[],int v){
    cout<<"Printing the graph := "<<endl;
    for(int i=0;i<v;i++){
        for(int x : ad[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void dfsR(vector<int> ad[],int v,bool visited[],int dt[],int time){
   visited[v] = true;
   dt[v] = time;
   for(int x : ad[v]){
          if(visited[x]==false){
            time++;
              dfsR(ad,x,visited,dt,time);
          }
        
   }
}
void dfsW(vector<int> ad[],int v,bool visited[],int low[],int dt[],int parent){
    visited[v]=true;
     low[v] = dt[v];
    for(int x : ad[v]){
           if(visited[x]==false){
            dfsW(ad,x,visited,low,dt,v);
           }
           else if(x != parent){
            low[v] = min(low[v],low[x]);
           }
    }
    low[parent] = min(low[parent],low[v]);
}
void dfsB(vector<int> ad[],int v,bool visiting[],int low[],int dt[],stack<int> &s){
    
           visiting[v]=true;
          for(int x : ad[v]){
           if(visiting[x]==false && low[x] != dt[x]){
              dfsB(ad,x,visiting,low,dt,s);
           }
    }
     s.push(v); 
     if(low[v]==dt[v]){
        while(s.empty() == false){
             cout<<s.top()<<" ";
             s.pop();
        }
        cout<<endl;
        
    }
    
}
void getDT(vector<int> ad[],int v,int disc_time[]){
       bool visited[v];
       for(int i=0;i<v;i++){
         visited[i]=false;
       }
       int time = 1;
       for(int i=0;i<v;i++){
        if(visited[i]==false){
             dfsR(ad,i,visited,disc_time,time);
        }
       }
       
}
void getLow(vector<int> ad[],int v,int low[],int dt[]){
    bool visit[v];
    for(int i=0;i<v;i++){
        visit[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visit[i]==false){
             dfsW(ad,i,visit,low,dt,-1);
        }
    }
}
void tarzans(vector<int> ad[],int v){
 int dt[v];
 int low[v];
 bool visiting[v];
 stack<int> s;
 for(int i=0;i<v;i++){
    dt[i]=0;
    low[i]=INFINITY;
 }
 getDT(ad,v,dt);
  cout<<"Discovery times of all the vertices are :="<<endl;
       for(int i=0;i<v;i++){
        cout<<dt[i]<<" "; 
       }
       cout<<endl;
getLow(ad,v,low,dt);
 cout<<"Low values  of all the vertices are :="<<endl;
       for(int i=0;i<v;i++){
        cout<<low[i]<<" "; 
       }
       cout<<endl;
       for(int i=0;i<v;i++){
        visiting[i]=false;
       }
       cout<<"Tarzans Strongly connected components are := "<<endl;
       for(int i=0;i<v;i++){
        if(visiting[i]==false){
        dfsB(ad,i,visiting,low,dt,s); 
            }
       }
       
      
}

int main(){
     int v = 5;
     vector<int> ad[v];
     insDGraph(ad,0,1);
     insDGraph(ad,1,2);
     insDGraph(ad,2,0);
     insDGraph(ad,1,3);
     insDGraph(ad,3,4);
     printGraph(ad,v);
     tarzans(ad,v);
    return 0;
}