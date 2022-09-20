#include<iostream>
#include<unordered_map>
using namespace std;

//longest subarray with given sum using efficient solution.
int maxlen(int arr[],int n,int sum){
int pre[n];
int res=0;
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
    res = max(res,i-m[pre[i]-sum]);
}

}
return res;
}
int main(){
int arr[]={8,3,1,5,-6,6,2,2};
int n = sizeof(arr)/sizeof(int);
cout<<"The size of the longest subarray is :- "<<maxlen(arr,n,4)<<endl;

    return 0;
}