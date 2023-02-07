//self made implementation of prims algo
#include<bits/stdc++.h>
using namespace std;
//here N represents number of vertices
const int N = 5;
//printing the graph
void printPg(int graph[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int minSpanTreeWeight(int graph[N][N]){
    bool visited[N];
    for(int i=0;i<N;i++){
        visited[i]=false;
    }
       vector<int> v;
       v.push_back(0);
       visited[0] = true;
       
       int ans = 0;
       int k;
       while(v.size()!=N){
        int res = INT_MAX;
             int n = v.size();
             for(int i=0;i<=v[n-1];i++){
                if(visited[i]==true){
                for(int j=0;j<N;j++){
                    if(graph[i][j]!=0 && visited[j]==false){
                        res = min(res,graph[i][j]);
                    }
                }
                }
             }
             //now we will push that node to the vector v
             for(int i=0;i<=v[n-1];i++){
                if(visited[i]==true){
                for(int j=0;j<N;j++){
                    if(graph[i][j]!=0 && res == graph[i][j] && visited[j]==false){
                        v.push_back(j);
                        visited[j]=true;
                        break;
                    }
                }
                }
             }
                      ans = ans + res;
       }
      
       return ans;
}

int main(){
     int graph[N][N];
     int x;
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"Enter the value ?"<<endl;
            cin>>x;
            graph[i][j]=x;
        }
     }
     printPg(graph);
     cout<<"The weight of minimun spanning tree is := "<<minSpanTreeWeight(graph)<<endl;
    return 0;
}