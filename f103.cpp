//activity selection problem 
//only one activity can get selected at a time.
#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair<int,int> a, pair <int,int> b){
    if(a.second < b.second){
        return true;
    }
    return false;
}

void maxPro(pair<int,int> arr[],int n){
     sort(arr,arr+n,myCmp);
             int res = 1;
             int prev = 0;
           for(int curr =1;curr<n;curr++){
               if(arr[prev].second <= arr[curr].first){
                   res++;
                   prev = curr;
               }
               }
            cout<<"The max number of activities can be done :- "<<res<<endl;   
           }


int main(){
pair <int,int> arr[]={{1,3},{2,4},{3,8},{10,11}};
int n = sizeof(arr)/sizeof(pair<int,int>);
maxPro(arr,n);
return 0;
}