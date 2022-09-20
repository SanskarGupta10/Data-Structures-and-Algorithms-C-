#include<iostream>
using namespace std;
//it is just a partial correct sol
void moveZB(int arr[],int n){
    int j;
    int count=1;
for(int i=0;i<n;i++){
 if(arr[i]==0)
 {
  for(j=i;j<n-1;j++){
    arr[j]=arr[j+1];
    
   
  }
  
  arr[n-1]=0;
 }


}
 for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
 }
}
void removeZeroes(int arr[],int size){
int count =0;
for(int i=0;i<size;i++){
 if(arr[i]!=0){
    swap(arr[i],arr[count]);
    count++;
 }
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}

}
//left rotating an array by 1
void leftRot(int arr[],int n){
for(int i=0;i<n-1;i++){
swap(arr[i],arr[i+1]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
//left rotation of an array by d times
void rotdT(int arr[],int n,int d){
//d id the number of times of rotation
for(int j=0;j<d;j++){
 for(int i=0;i<n-1;i++){
    swap(arr[i],arr[i+1]);
 }

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}
int main(){
 int arr[]={1,2,3,4,5,6};
 int size = sizeof(arr)/sizeof(int);
 removeZeroes(arr,size);
 cout<<"Printing the array after 1  left rotation"<<endl;
 leftRot(arr,size);
 cout<<endl<<"Printing the array after d left rotation"<<endl;
 rotdT(arr,size,3);
    return 0;
}