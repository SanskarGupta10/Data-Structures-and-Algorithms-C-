#include<bits/stdc++.h>
using namespace std;
//gfg love babbar dsa sheet question
 int minJumps(int arr[], int n){
        int jumps = 0;
        int index = 0;
        int i = 0;
        while(i<n){
            if(arr[i]==0){
                break;
            }
            index = i + arr[i];
            i = arr[i];
            jumps++;
            if(index >= n-1){
                break;
            }
            
        }
        return jumps;
    }
int main(){
  int arr[] = {1,4,3,2,6,7};
  int n = sizeof(arr)/sizeof(int);
  cout<<minJumps(arr,n)<<endl;

    return 0;
}