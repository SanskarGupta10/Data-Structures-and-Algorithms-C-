//sum of natural numbers using recursion
#include<iostream>
using namespace std;


int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
} 

//its tail recursive func
int tSum(int n,int k){
    //initialize k with 1
    if(n==1){
        return k;
    }
    else{
        return tSum(n-1,k+n);
    }
}
int main(){
    int m;
    cout<<"Enter m?"<<endl;
    cin>>m;
    int k =1;
    cout<<tSum(m,k)<<endl;
    return 0;
}