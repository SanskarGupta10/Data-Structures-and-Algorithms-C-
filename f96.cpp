//Code for fractional knapsack problem solution
#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair <int,int> a,pair <int,int> b){
      double r1 = (double)a.first/a.second;
      double r2 = (double)b.first/b.second;
      if(r1>r2){
        return true;
      }
      return false;
}
void maxPro(pair <int,int> arr[],int n,int w){
    double res = 0.0;
        sort(arr,arr+n,myCmp);
        for(int i=0;i<n;i++){
            if(arr[i].second <= w){
                w = w - arr[i].second;
                res = res + arr[i].first;
            }
            else if(arr[i].second > w){
              res = res + (double)arr[i].first * w/arr[i].second;
            }
        }
        cout<<"The max amount of profit is :- "<<res<<endl;
}

int main(){
    pair <int,int> arr[]={{500,20},{400,30},{600,50}};
    int n = sizeof(arr)/sizeof(pair <int,int>);
    maxPro(arr,n,100);

    return 0;
}