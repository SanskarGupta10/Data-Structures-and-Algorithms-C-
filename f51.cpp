#include<iostream>
using namespace std;
//mam consecutive 1 in binary array having 0 or 1
int maxOne(int arr[],int n){
    int count;
    int temp=0;
for(int i=0;i<n;i++){
    if(arr[i] != 1){
  count =0;
    }
    else{
        count =1;
        break;
    }
}

for(int i=0;i<n;i++){
if(arr[i]==1 && arr[i+1]!=0){
    count++;
}
if(arr[i+1]==0 || i ==n-2){
    if(count>temp){
        temp = count;
    }
    count=1;
}

}
if(temp==1){
    temp=0;
}
return temp;
}
int main(){
    int arr[]={0,0,1,1,1,1,1,0,1,1,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Maximum consecutive 1's in a  binary array are :- "<<maxOne(arr,n);

    return 0;
}