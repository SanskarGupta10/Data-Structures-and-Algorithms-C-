#include<iostream>
#include<algorithm>
using namespace std;

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
//print all the prime numbers below a given number n
void priPrNum(int n){
    
for(int i=2;i<n;i++){
int tog = checkPrime(i);
if(tog == 0){
    cout<<"Element is "<<i<<endl;
}
   
}

}


int main(){
 int data;
 cout<<"Enter the value of the data?"<<endl;
 cin>>data;
 priPrNum(data);


    return 0;
}