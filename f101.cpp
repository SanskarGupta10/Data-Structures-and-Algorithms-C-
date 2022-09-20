#include<bits/stdc++.h>
using namespace std;
//rat maze problem self made approach
void playRat(int *arr[],int n){
    int ans = 1;
    int sol[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
   int i=1;
   int j=1;
   if(arr[0][0]==1 && arr[n-1][n-1]==1){
    sol[0][0]=1;
    sol[n-1][n-1]=1;
   while(i<n){
    if(j==n){
         while(i<=n){
         if(arr[i-1][j-1]==1 && arr[i][j-1]==1){
        sol[i-1][j-1]=1;
        sol[i][j-1]=1;
        i++;
        
         }
         else{
            break;
         }
        
       
    }
      break;
    }

          while(j<n){
    if(arr[i-1][j-1]==1 && arr[i][j-1]==1){
        sol[i-1][j-1]=1;
        sol[i][j-1]=1;
        i++;
         
        if(arr[i-1][j-1]==1 && arr[i-1][j]==1){
        sol[i-1][j-1]=1;
        sol[i-1][j]=1;
        j++;
        }
         }

   else if(arr[i-1][j-1]==1 && arr[i-1][j]==1){
        sol[i-1][j-1]=1;
        sol[i-1][j]=1;
        j++;
          
        if(arr[i-1][j-1]==1 && arr[i][j-1]==1){
        sol[i-1][j-1]=1;
        sol[i][j-1]=1;
        i++;
        
    }
    }
     
   else if((arr[i-1][j-1]==1 && arr[i][j-1]!=1) && (arr[i-1][j-1]==1 && arr[i-1][j]!=1) || arr[i-1][j-1]==0){
        ans = 0;
        break;
    }
   
  }
   if(ans==0){
        break;
    }
   }
      if(ans == 1){
        cout<<"Yes path is Possible !"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
      }
      if(ans ==0){
        cout<<"No path is Possible !"<<endl;
      }
   }
   else{
    cout<<"Not a valid maze case !"<<endl;
   }
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
    playRat(maze,n);
    return 0;
}