#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

//rope cutting problem
int output(int n,int a,int b){
if(n==0){
    return 0;

}
if(n<0){
    return -1;
}
int res = max(output(n-a,a,b),output(n-b,a,b));
if(res == -1){
    return -1;
    
}
return res+1;


}


int main(){
    int n =12;
    int a = 3;
    int b =19;
  if(output(n,a,b) == -1){
    cout<<"No rope pieces possible of length"<<a<<"and"<<b<<endl;
  }
  else{
    cout<<output(12,3,19)<<" possible pieces !"<<endl;
  }

}