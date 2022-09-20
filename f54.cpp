#include<iostream>
#include<limits.h>
using namespace std;
//max consecutive sum of k digits using self made code
int max(int arr[],int n,int k){
int res = INT_MIN;
int sum=0;
for(int i=0;i+k-1<n;i++){

  for(int j=i;j<k+i;j++){
    sum = sum + arr[j];
  
  }
    res = max(res,sum);
    sum =0;

}
return res;

}
bool findSum(int arr[],int n,int des_sum){
    int ans = 0;
int sum =0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        sum = sum + arr[j];
        if(sum==des_sum){
           ans = 1;
           break;
         
        }
        
    }
   
    sum = 0;
}
 return ans;

}

int main(){
    int arr[]={1,8,30,-5,20,7};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    int ans = max(arr,n,k);

    //to print sum
    cout<<"The value of the max consecutive sum of the elements given is :- "<<ans<<endl;
    //to find if the elements adds up to form the desired sum
    if(findSum(arr,n,45)==1){
        cout<<"Yes there is a subarray present !"<<endl;
    }
    else{
        cout<<"No such sum present ! "<<endl;
    }

    return 0;
}