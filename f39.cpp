#include<iostream>
using namespace std;
const int r =3;
const int c = 3;

//searching in a row and columnwise sorted array using a naive solution
void searchMat(int arr[r][c],int element){
    for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
if(arr[i][j]==element){
cout<<"Element found at the index "<<i<<","<<j<<endl;
  return ;
}
}

    }
    cout<<"No such element found !"<<endl;
}

int main(){
    int element;
    int arr[3][3]={{10,20,30},
                {5,15,25},
                {2,4,8}};
                cout<<"Enter the value of an element ?"<<endl;
                cin>>element;
    searchMat(arr,element);
    return 0;
}