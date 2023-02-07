#include<bits/stdc++.h>
using namespace std;

void give(int N,vector<int> &v1){
int res = N;
if(res==-1){
    return;
}
   v1.push_back(res);
  for(int i=2;i<=N/2;i++){
    if(N%i == 0 && N/i != i){
      give(N/i,v1);
      give(i,v1);
      break;
    }
    else if(N%i==0 && N/i == i){
        give(N/i,v1);
        break;
    }
  }
  give(-1,v1);
}
int minDivHeight(int N){
    vector<int> arr;
    give(N,arr);
    //printing the values of keys of all the nodes in order to have better understanding
    cout<<endl<<"Node elements := "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float ans = log2(arr.size());
    int fans;
    fans = (int)ans;
    return fans;
}
int main(){
    int N;
        cout<<"Enter the value of the root node ?"<<endl;
        cin>>N;
        cout<<"The answer is := "<<minDivHeight(N)<<endl;

    return 0;
}