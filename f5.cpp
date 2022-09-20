#include<iostream>
#include<algorithm>
using namespace std;

// prime factorisation results
int checkPrime(int n){
    int chk = 0;
for(int i =2;i<n;i++){
   if(n%i ==0){
    chk = 1;
    break;

   }

}
return chk;
}
int main(){
    int value;
    cout<<"Enter the value?"<<endl;
    cin>>value;
    if(checkPrime(value)){
        cout<<"Value is not a prime number!"<<endl;
    }
    else{
        cout<<"Value is a prime number!"<<endl;
    }

    return 0;
}