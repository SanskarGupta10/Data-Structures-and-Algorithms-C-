#include<iostream>
using namespace std;
//2 pointer approach can be used just for the sorted array
bool pairSum(int arr[],int n,int x){
    
    
int l=0;
int r = n-1;
while(l<r){
if(arr[l] + arr[r] == x){
    return true;
}
else if(arr[l]+arr[r]>x){
  r--;
}
else{
    l++;
}
}
 return false;
}
int main(){
int arr[]={2,3,4,5,6,7};
int n = sizeof(arr)/sizeof(int);
if(pairSum(arr,n,8)){
    cout<<"There exist a pair ! "<<endl;
}
else{
    cout<<"No such pair exists !"<<endl;
}

return 0;
}