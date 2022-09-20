#include<iostream>
#include<algorithm>
using namespace std;

//meeting max guests 
int maxGuest(int arr[],int dep[],int n)
{   sort(arr,arr+n);
sort(dep,dep+n);
int i = 1;
int j=0;
int curr = 1;
int res = 1;
while(i<n && j<n){
    if(arr[i]<=dep[j]){
        i++;
        curr++;
    }
    else{
        
        curr--;
        j++;
    }
    res = max(res,curr);
}
return res;
}
int main(){
int arr[]={800,700,600,500};
int dep[]={840,820,830,530};
int n = sizeof(arr)/sizeof(int);
   cout<<"The max number of guests one can meet are :- "<<maxGuest(arr,dep,n)<<endl;
    return 0;
}