#include<iostream>
#include<unordered_map>
using namespace std;

void arrlen(int arr[],int n,int sum=0){
    int res =0;
for(int i=0;i<n;i++){
    if(arr[i] == 0){
        arr[i] = -1;
    }
}

int pre[n];
pre[0]=arr[0];
for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+arr[i];
   
}
unordered_map <int,int> m;
for(int i=0;i<n;i++){
  if(pre[i]==sum){
    res = i+1;
  }
  if(m.find(pre[i])==m.end()){
    m.insert({pre[i],i});
  }
  if(m.find(pre[i]-sum)!= m.end()){
    res = max(res , i - m[pre[i]-sum]);
  }

}
cout<<"The length of longest subarray is :- "<<res<<endl;
}
int main(){
     int arr[]={0,0,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(int);
    arrlen(arr,n,0);
    return 0;
}