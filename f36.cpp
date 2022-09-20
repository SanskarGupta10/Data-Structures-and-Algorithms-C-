#include<iostream>
using namespace std;
const int n = 3;
const int m =3;
//const is very important here
//finding the transpose of a matrix which just took place for the square matrix
void transpose(int arr[m][n]){
    int temp;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i>j){
         swap(arr[i][j],arr[j][i]);
         //or we can make our own swapping function
        }
    }
}
//printing the elements of an array
cout<<"Transpose matrix:-"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}}
// rotating the matrix by 90 degree anticlockwise direction
void rotateAnti(int arr[m][n]){
 transpose(arr);

 cout<<"Printing the rotated array:-"<<endl;
 for(int i=m-1;i>=0;i--){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
 }

}

int main(){
   int arr[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter element ?"<<endl;
        cin>>arr[i][j];
    }
   }
   cout<<endl;
   //printing the original array
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}

rotateAnti(arr);
    return 0;
}