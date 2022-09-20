#include<iostream>
using namespace std;
//using array of pointers
void printSnake(int *arr[],int m,int n ){

for(int i=0;i<m;i++){
if(i%2 ==0){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";
    }
}
else{
    for(int j=n-1;j>=0;j--){
        cout<<arr[i][j]<<"\t";
    }
    
}

}
}
//printing the boundary elements 
void printBoun(int * arr[],int m,int n){
for(int i=0;i<m;i++){
//if it is the 1st row print all its elements in an order

int end = n-1;
if(i==0){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";
    }
}

  if(i>0 && i<m-1){
       cout<<arr[i][end]<<"\t";
    }

   if(i==m-1){
    for(int j=n-1;j>=0;j--){
        cout<<arr[i][j]<<"\t";
    }
   }
}
for(int i=m-2;i>0;i--){
    int start = 0;
    cout<<arr[i][start]<<"\t";
}

}

int main(){
    int m,n;
    cout<<"Enter the value of m?"<<endl;
    cin>>m;
    cout<<"Enter n?"<<endl;
    cin>>n;
int * arr[m];
for(int i=0;i<m;i++){
    arr[i] = new int[n];
    for(int j=0;j<n;j++){
    cout<<"Enter value?"<<endl;
    cin>>arr[i][j];
}}

cout<<endl;

cout<<" \n Printing the boundary elements of a matrix "<<endl;
printBoun(arr,m,n);
return 0;

}