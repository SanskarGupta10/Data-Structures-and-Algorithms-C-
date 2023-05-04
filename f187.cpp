//longest increasing subsequence self made
#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int n,vector<int> &v){
    v.push_back(arr[0]);
int len = 1;
for(int i=1;i<n;i++){
    if(v[len-1]<arr[i]){
        v.push_back(arr[i]);
        len++;
    }
    else{
        for(int j=0;j<v.size();j++){
            if(arr[i]<v[j]){
                v[j] = arr[i];
                break;
            }
        }
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return v.size();

}

int main(){
 int n;
    cout<<"Enter the value of n ?"<<endl;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        int value;
        cout<<"Enter value ?"<<endl;
        cin>>arr[i];
    }
   vector<int> v;
   cout<<"Value of LIS  array and LIS are := "<<lis(arr,n,v)<<endl;
    return 0;
}