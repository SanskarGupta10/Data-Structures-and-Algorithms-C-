#include<iostream>
#include<algorithm>
using namespace std;

//to find the number in binary
void bitsRepre(int n){
    int i =0;
    int arr[40];
    int temp;
    if(n==0){
        cout<<"0";
    }
 while(n>0){
  if(n%2 != 0){
      arr[i]=1;
      i++;
  }
  else{
    arr[i]=0;
    i++;
  }
  n = n/2;
 }


 //reversing an array
 for(int j=0;j<i/2;j++){
    temp = arr[j];
    arr[j]=arr[i-j-1];
    arr[i-j-1]=temp;
 }
 //now printing the array
  for(int j =0;j<i;j++){
    cout<<arr[j];
 }
 

}
int main(){
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;
    cout<<"The answer is ";
    bitsRepre(value);


    return 0;
}