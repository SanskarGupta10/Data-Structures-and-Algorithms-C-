#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
//getting max score question by expedia 
int getMaxScore(int n,int arr[],int k){
    int arr_count = n;
        int res = 0;
       int max = INT_MIN;
       int p = max;
       int q = max;
       int start = 0;
    
       for(int l=0;l<k;l++){
        p = max;
        q=max;
        for(int i=start;i<arr_count;i++){
                  if(arr[i]>p){
                   p = arr[i];
                  }
        }
        
        for(int j=0;j<start-1;j++){
                 if(arr[j]>q){
                    q = arr[j];
                 }
        }
        
        if(p>q){
        for(int i = start;i<arr_count;i++){
            if(arr[i]==p){
                res = res + arr[i];
                start = i+1;
            }
        }
       }
       else if(q>p){
           for(int i=0;i<start-1;i++){
            if(arr[i]==q){
                res = res + arr[i];
                arr_count = start-1;
                start = i+1;
            }
        } 
       }
       }
   return res;
}

int main(){
    int arr[]={-1,4,6,7,-3,8,3,10,-11,2};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    cout<<"The maximum score is :- "<<getMaxScore(n,arr,k)<<endl;

    return 0;
}