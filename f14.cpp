#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
     return fibo(n-1)+fibo(n-2);
    }

//its not a tail recursive function
}

//tail recursive func equivalent
int fibTail(int n,int a,int b){
  //a initializes to 0 while b initializes to 1
    if(n==0){
   return a;
    }
    if(n==1){
        return b;
    }
    else{
        return fibTail(n-1,b,a+b);
    }
}

int main(){
    //to find the fibonacci series upto m th term
    int m;
    cout<<"Enter the value of m ?"<<endl;
    cin>>m;
    int a=0;
    int b =1;
    cout<<0<<endl;
    for(int i=0;i<m-1;i++){
        
        cout<<fibTail(i,b,a+b)<<endl;
    }
  return 0;
}