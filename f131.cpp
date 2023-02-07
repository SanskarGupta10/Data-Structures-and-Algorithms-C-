#include<bits/stdc++.h>
using namespace std;
//priority queues in c++ stl

int main(){
  int arr[] = {10,15,50,4,20};
  int n = sizeof(arr)/sizeof(int);
      priority_queue<int,vector<int>,greater<int>> pq(arr,arr+5); // in order to have min heap
      while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
      }
    return 0;
}