#include<bits/stdc++.h>
using namespace std;
//rat in a maze problem solution using backtracking
bool isSafe(int i,int j,int n, int * arr[]){
    if(i<<n && j<<n && arr[i][j]==1 ){
        return true;
    }
    return false;
}
bool solveMazeRec(int i,int j,int n,int* arr[]){
    int sol[n][n];
      if(i==n-1 && j==n-1){
        sol[i][j]=1;
        return true;
      }
      if(isSafe(i,j,n,arr)==true){
        if(sol[i][j]==1){
            return false;
        }
        sol[i][j]=1;
        if(solveMazeRec(i+1,j,n,arr)==true){ return true;}
        if(solveMazeRec(i,j+1,n,arr)==true){ return true;}

       sol[i][j]=0;
       return false;
      }
      
      return false;
} 
bool solveMaze(int *arr[],int n){
   int sol[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sol[i][j]=0;
    }
   }
   if(solveMazeRec(0,0,n,arr)==false){
    cout<<"No path exist !"<<endl;
    return false;
   }
   
      cout<<"Yes path exist !"<<endl;
      for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sol[i][j]=0;
    }
   }
       return true;
   
}
int main(){
    int n;
    cout<<"Enter the value of n ?"<<endl;
    cin>>n;
    int *maze[n];
    for(int i=0;i<n;i++){
        maze[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
            
        }
        cout<<endl;
    }
   solveMaze(maze,n);

    return 0;
}