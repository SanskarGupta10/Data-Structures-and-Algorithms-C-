#include<iostream>
using namespace std;

//implementation of a naive method

//efficeint method
int countTrailingZeroes(int value){
    int count = 0;
    if(value < 5){
        printf("No trailing Zeroes!\n");
    }
    for(int i =5;i<=value;i = i*5){
     count = count + value/i ;
    }
  return count;
}
int main(){
  int value;
  cout<<"Enter the value !"<<endl;
  cin>>value;
  int count;
  count = countTrailingZeroes(value);
  cout<<"The total trailing zeroes are "<<count<<endl;



    return 0;
}