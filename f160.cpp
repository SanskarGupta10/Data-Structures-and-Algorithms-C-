//implementation of kosaraju's algorithm
#include<bits/stdc++.h>
using namespace std;
void insertGraph2(vector<int> ad[],int a,int b){
       ad[a].push_back(b);
}
void dfsRec(vector<int> ad[],int i,bool visited[],stack<int> &s){
    visited[i]=true;
        for(int x : ad[i]){
            if(visited[x]==false){
                visited[x] = true;
             dfsRec(ad,x,visited,s);
            }
        }
        s.push(i);
}
void sDfs(vector<int> ad[],int i,bool visited[]){
    visited[i]=true;
      cout<<i<<" ";
      for(int x : ad[i]){
        if(visited[x]==false){
        sDfs(ad,x,visited);
        }
      }
}
void printGraph(vector<int> ad[],int v){
     for(int i=0;i<v;i++){
        for(int x: ad[i]){
            cout<<x<<" ";
        }
        cout<<endl;
     }
}
void kosaRajuSC(vector<int> ad[],int v){
    vector<int> ver;
   bool visited[v];
   for(int i=0;i<v;i++){
    visited[i]=false;
   }
   stack<int> s;
   for(int i=0;i<v;i++){
    if(visited[i]==false){
        dfsRec(ad,i,visited,s);
    }
   }
   while(s.empty()==false){
    ver.push_back(s.top());
    s.pop();
   }
   //implementing the reversal of the graph
   vector<int> rev[v];
   for(int i=0;i<v;i++){
       for(int x : ad[i]){
        rev[x].push_back(i);
       }
   }
   cout<<"Printing graph in reverse order := "<<endl;
     printGraph(rev,v);
     bool visit[v];
     for(int i=0;i<v;i++){
        visit[i]=false;
     }
     for(int i=0;i<v;i++){
         if(visit[ver[i]]==false){
            cout<<endl;
              sDfs(rev,ver[i],visit);
              
         }
         
     }

}
int main(){
      int v = 6;
      vector<int> ad[v];
      insertGraph2(ad,0,1);
      insertGraph2(ad,1,2);
      insertGraph2(ad,2,3);
      insertGraph2(ad,3,0);
      insertGraph2(ad,3,4);
      insertGraph2(ad,4,5);
      insertGraph2(ad,5,4);
      cout<<"The Current Graph is := "<<endl;
      printGraph(ad,v);
      kosaRajuSC(ad,v);
      
    return 0;
}