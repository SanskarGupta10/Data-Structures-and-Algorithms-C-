#include<bits/stdc++.h>
using namespace std;
//job sequencing problem self made code
bool myMp(pair<int,int> a,pair<int,int> b){
    return (a.first<b.first);

}
bool myCmp(pair<int,int> a,pair<int,int> b){
    if((a.first == b.first) && (a.second>b.second)){
   return true;
   }
      return false;
}
int maxPro(pair<int,int> arr[],int n){
    sort(arr,arr+n,myMp);
    sort(arr,arr+n,myCmp);
   
    int ans = 0;
    int a = 0;
    int res = arr[n-1].first;
    for(int i=0;i<n;i++){
        if(arr[i].first>a && arr[i].first<=res){
                ans = ans + arr[i].second;
                a++;
        }
    }
  return ans;
}

int main(){
    pair<int,int> arr[]={{2,100},{1,50},{2,10},{1,20},{3,30}};
    int n = sizeof(arr)/sizeof(pair<int,int>);
    cout<<"The maximum amount of profit is :- "<<maxPro(arr,n)<<endl;

    return 0;
}