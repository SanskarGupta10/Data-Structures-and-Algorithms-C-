#include<iostream>
using namespace std;

//to check whether the given number is palindrome or not
bool isPalindrome(int x){
  int temp = x;
  int count = 0;
  if(x==0 && x<0){
    return false;
  }
  while(temp>0){
      temp = temp/10;
      count++;
  }
  int size = count;
  int arr[size];
  int i=0;
  while(x>0 && size>i ){
    arr[i] = x%10;
    x = x/10;
    i++;
  }
  for(int j=0;j< size/2;j++){
    if(arr[j]!=arr[size-j-1]){
        return false;
    }
  }
   return true;
}
int main(){
   int x =123215;
   cout<<isPalindrome(x);
    return 0;
}