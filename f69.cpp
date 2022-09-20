#include<iostream>
#include<unordered_map>
using namespace std;
//efficient sol to find element having more than n/k occurence
void printel(int arr[],int n,int k){
    unordered_map <int,int> m;
  for(int i=0;i<n;i++){
    m[arr[i]]++;
    //its used for insertion of an element in hash map as well as updating its key index value.
    
  }
  for(auto e:m){
    if(e.second > (n/k)){
        cout<<e.first<<"\t";
    }
  }
}
int main(){
    int arr[]={30,10,20,30,30,40,30};
   int n= sizeof(arr)/sizeof(int);
   printel(arr,n,2);

    return 0;
}