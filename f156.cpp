//self made implementation  of prims using graph as vector<int> graph[]
//its a more technical solution
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
int minSpanTreeWeight(vector<int> graph[],int N){
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
                    int j = 0;
                for(int x : graph[i]){
                    if(x!=0 && visited[j]==false){
                        res = min(res,x);
                    }
                    j++;
                }
                }
             }
             //now we will push that node to the vector v
             for(int i=0;i<=v[n-1];i++){
                if(visited[i]==true){
                    int j =0;
                for(int x : graph[i]){
                    if(x!=0 && res == x && visited[j]==false){
                        v.push_back(j);
                        visited[j]=true;
                        break;
                    }
                    j++;
                }
                }
             }
                      ans = ans + res;
       }
      
       return ans;
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
     cout<<"Minimum weight of spanning tree is := "<<minSpanTreeWeight(graph,ver)<<endl;
    return 0;
}