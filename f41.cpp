#include<iostream>
#include<math.h>
using namespace std;
const int r =3;
const int c= 3;
//creating a function to find cofactor matrix
int determinant(int arr[r][c],int ri,int ci){

int ar[4];
int k=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i == ri || j == ci){
            continue;
        }
        ar[k]=arr[i][j];
       k++;
    }
}
int result = ar[0]*ar[3]-ar[1]*ar[2];
return result;

}

void cofactor(int arr[r][c]){
//making the new array
int ans[r][c];
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
       ans[i][j]= pow(-1,i+j)*determinant(arr,i,j);
    }
}

//printing the cofactor matrix
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<ans[i][j]<<"\t";
    }
    cout<<endl;
}
 int temp;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i>j){
      swap(ans[i][j],ans[j][i]);
        }
    }
}

cout<<"Printing adjoint matrix:-"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<ans[i][j]<<"\t";
    }
    cout<<endl;
}

}

int main(){
int ar[r][c];
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
    cout<<"Enter element?"<<endl;
    cin>>ar[i][j];
  }
}
cout<<"Printing the original array:-"<<endl;
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
    cout<<ar[i][j]<<"\t";
  }
  cout<<endl;
}
cout<<"printing cofactor matrix:-"<<endl;
cofactor(ar);




}