#include<iostream>
using namespace std;

int digitSum(int n){
    int i;
if(n==0){
    return 0;
    }
else{
     i = n%10;
     return i + digitSum(n/10);
}

}
int main(){
int number;
cout<<"Enter the number ?"<<endl;
cin>>number;

cout<<digitSum(number)<<endl;
}
