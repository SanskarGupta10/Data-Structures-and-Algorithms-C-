//ritakshis challenge
#include<bits/stdc++.h>
using namespace std;

void ksmallest(int arr[],int n,int k){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    //printing the content of the set
    int i = 0;
    int count = 0;
    for(int x : s){
          count++;
          if(count == k){
            i = x;
            break;
          }
    }
    cout<<"The k smallest element is := "<<i<<endl;
}

int main(){
  int arr[]={12,50,81,6,41,17,54};
  int n = sizeof(arr)/sizeof(int);
  ksmallest(arr,n,4);

    return 0;
}