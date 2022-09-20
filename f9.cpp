#include<iostream>
#include<algorithm>
using namespace std;


class Power{

public:
int x,n;

Power(int a,int b){
    x =a;
    n=b;
}
//it is a naive soln
int calPow(int x,int n){
    int prod = 1;
    for(int i =0;i<n;i++){
  prod = prod * x;
    }
    return prod;
}

//efficient soln to calculate power using recursive approach
int powEff(int x,int n){
    if(n == 0){
        return 1;
    }
    else{
int temp = powEff(x,n/2);
temp = temp*temp;
if(n%2 == 0){
    return temp;
}
else{
    return temp*x;
}

    }
}

void print(int y){
    cout<<"The value of x raise to power n is "<<y;
}

};
int main(){
    Power P1(2,7);
    int ans = P1.calPow(2,7);
    P1.print(ans);
    cout<<endl;
    int ans1 = P1.powEff(2,8);
    P1.print(ans1);


return 0;
}