#include<iostream>
using namespace std;
//finding the median of the 2 d array when it is sorted row wise
const int r = 3;
const int c = 3;
void median(int arr[r][c]){
    //creating the new array
    int size = r*c;
    
    int ar[size];
    int count = 0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       ar[count]= arr[i][j];
       count++;
    }
}
//now sort ar array using bubble sort
int temp ;
for(int i=0;i<size-1;i++){
  for(int j=0;j<size-i-1;j++){
    if(ar[j]>ar[j+1]){
        temp = ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=temp;
    }
  }
}
//now finding the middle element of the sorted array
int mid = size/2;
cout<<"The median of this array is "<<ar[mid]<<endl;
}
int main(){
int arr[3][3]={{10,20,30},
                {5,15,25},
                {2,4,8}};
    median(arr);
    return 0;
}