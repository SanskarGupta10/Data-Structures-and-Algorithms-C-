//ceiling on the left side
#include<bits/stdc++.h>
using namespace std;
//efficient solution
void opceil(int arr[],int n){
   set<int> s;

   for(int i=0;i<n;i++){
     auto it = s.upper_bound(arr[i]);
    if(it != s.end()){
       cout<<*it<<" ";
    }
    else{
        cout<<-1<<" ";
    }
    s.insert(arr[i]);
   }
}

int main(){
     int arr[]={6,18,4,5};
     int n = sizeof(arr)/sizeof(int);
    opceil(arr,n);
    return 0;
}