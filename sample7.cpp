#include<bits/stdc++.h>
using namespace std;
//printing the odd numbers to be said aa a lucky number in a week
void printLucky(int arr[],int n){
    int sum = 0;
   for(int i=0;i<n;i++){
    
    int count = 1;
     for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            i++;
        }
     }
    if(count % 2 != 0){
        sum = sum + arr[i]*count;
    }
    
   }
   cout<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n ?"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value ?"<<endl;
        cin>>arr[i];
    } 

   printLucky(arr,n);
    return 0;
}