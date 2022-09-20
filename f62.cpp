#include<iostream>
using namespace std;
//longest subarray with the given sum.
int lSub(int arr[],int n,int gsum){
 int res=0;
    for(int i=0;i<n;i++){
        int count = 0;
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + arr[j];
            count++;
            if(sum==gsum){
                res = max(count,res);
            }
            
        }
        
       
    }
    return res;
}

int main(){
   int arr[]={3,1,0,1,8,2,3,6};
   int n = sizeof(arr)/sizeof(int);
   cout<<"The size of the longest subarray is :- "<<lSub(arr,n,5)<<endl;
   
    return 0;
}