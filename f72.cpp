#include<iostream>
#include<unordered_set>
using namespace std;
//efficient solution for union of two sorted arrays
void effSol(int a[],int b[],int n,int m){
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(b[j]);
    }
    for(auto x : s){
        cout<<x<<"\t";
    }
}
//naiive sol for union of two unsorted arrays
void uniInt(int a[],int b[],int n,int m){
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        cout<<a[i]<<"\t";
    }
    for(int j=0;j<m;j++){
        int res = 0;
        if(j>0 && b[j]==b[j-1]){
            continue;
        }
        for(int i=0;i<n;i++){
            if(b[j]==a[i]){
                res = 1;
                break;
            }
        }
        if(res==0){
            cout<<b[j]<<"\t";
        }
    }
}
int main(){
  int a[]={3,5,10,10,10,15,15,20};
  int n = sizeof(a)/sizeof(int);
  int b[]={5,10,10,15,30};
  int m = sizeof(b)/sizeof(int);
  uniInt(a,b,n,m);
  cout<<endl;
  effSol(a,b,n,m);
    return 0;
}