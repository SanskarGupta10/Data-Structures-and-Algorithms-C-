#include<iostream>
#include<unordered_set>
using namespace std;
//subarray with given sum
bool sumPre(int arr[],int sum,int n){
int pre[n];
pre[0]=arr[0];
for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+arr[i];
}
unordered_set <int> s;
for(int i=0;i<n;i++){
    if(s.find(pre[i]-sum) !=s.end()){
       return true;
    }
    s.insert(pre[i]);
}
return false;
}

int main(){
int arr[]={5,8,6,13,3,-1};
int size = sizeof(arr)/sizeof(int);
if(sumPre(arr,23,size)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    return 0;
}