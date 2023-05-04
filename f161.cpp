#include<bits/stdc++.h>
//articulation point algorithm
using namespace std;

//insertion in the undirected  graph
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

void dfsR(vector<int> ad[],int v,bool visited[],int count[]){
   visited[v] = true;
   for(int x : ad[v]){
          if(visited[x]==false){
              count[v]++;
              dfsR(ad,x,visited,count);
          }
   }

}
//depth first search self made approach to check whether the point is an articulation point or not
void dfsA(vector<int> ad[],int v,int s){
    int count[v];
    for(int i=0;i<v;i++){
        count[i]=0;
    }
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
     // s represents the given point
     dfsR(ad,s,visited,count);    
     if(count[s]>1){
        cout<<" Vertex "<<s<<" is an articulation point ."<<endl;
     } 
     else{
        cout<<" Vertex "<<s<<" is not an articulation point ."<<endl;
     }
}
//it states all the articulation points in the graph
void allAP(vector<int> ad[],int v){
    //for all the vertices
     for(int i=0;i<v;i++){
            dfsA(ad,v,i);
     }
}
int main(){
    int v;
    v = 7;
    vector<int> ad[v];
    insGraph(ad,0,1);
    insGraph(ad,0,2);
    insGraph(ad,1,2);
    insGraph(ad,1,3);
    insGraph(ad,1,4);
    insGraph(ad,5,4);
    insGraph(ad,3,5);
    insGraph(ad,1,6);
    printGraph(ad,v);
    allAP(ad,v);
    return 0;
}