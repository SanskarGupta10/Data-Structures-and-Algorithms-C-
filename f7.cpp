#include<iostream>
#include<algorithm>
using namespace std;

//telling the divisors using efficient method of a number
void divEffi(int n){
int i,j;
j = i*i;
for(i =1; i*i<n; i++){
    if(n%i==0){
    cout<<i<<endl;}
}
for(j=n;i>=1;i--){
    if(n%i == 0){
   cout<<n/i<<endl;}
}

}

int main(){
    int value;
    cout<<"Enter the value?"<<endl;
    cin>>value;
    divEffi(value);
    return 0;
}