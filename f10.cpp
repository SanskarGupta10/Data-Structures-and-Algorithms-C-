#include<iostream>
#include<algorithm>
using namespace std;
//using the method binary exponentiation using iterative approach.

int powerBin(int x,int n){
int bit = 1;
while(n>0){
if(n%2 != 0){
    bit = bit * x;
    }

   
    x = x*x;
     n = n/2;
  

   
}
 return bit;
}


int main(){
    int x,n;
    cout<<"Enter the value of x and n "<<endl;
    cin>>x>>n;
    int ans = powerBin(x,n);
    cout<<"The value of ans is "<<ans<<endl;


}