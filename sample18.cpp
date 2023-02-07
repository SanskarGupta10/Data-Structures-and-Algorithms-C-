//ritakshi challenge
#include<bits/stdc++.h>
using namespace std;
const int N = 4;

void spiralRec(int mat[N][N],int a,int b){
    if(b<a){
        return;
    }
    else{
     for(int i=a;i<=b-1;i++){
        for(int j=a;j<b;j++){
            if(i==a){
             cout<<mat[a][j]<<" ";
            }
            else if(i>a && i<b-1 &&j==b-1){
                cout<<mat[i][b-1]<<" ";
            }
        }
     }
     for(int i=b-1;i>a;i--){
         for(int j=b-1;j>=a;j--){
            if(i==b-1){
                cout<<mat[b-1][j]<<" ";
            }
            if(i<b-1 && i>a && j==a){
                cout<<mat[i][a]<<" ";
            }
         }
     }
    }
       spiralRec(mat,a+1,b-1);
}
void printMat(int mat[N][N]){
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int mat[N][N];
    int x;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"Enter the value ?"<<endl;
            cin>>x;
            mat[i][j]=x;
        }
    }
    printMat(mat);
    cout<<"Spiral Traversal of the matrix is the below := "<<endl;
    spiralRec(mat,0,N);
    return 0;
}