#include<iostream>
using namespace std;
//window sliding technique
bool wstSum(int arr[],int n,int des_sum){
int curSum = arr[0];
int s =0;

for(int e=1;e<n;e++){
while(des_sum < curSum){
    curSum = curSum - arr[s];
    s++;
}
if(curSum == des_sum){
    return true;
}
if(e<n){
    curSum = curSum + arr[e];
}

}

return false;
}
int main(){

 int arr[]={1,8,30,15,20,7};
    int n = sizeof(arr)/sizeof(int);
       if(wstSum(arr,n,49)){
        cout<<"Yes the sum is present !"<<endl;
       }
       else{
        cout<<"No the sum is not present !"<<endl;
       }
    return 0;

}