#include<bits/stdc++.h>
using namespace std;
//previous greater element
void previousGreat(int arr[],int n){
               stack <int> s;
               s.push(arr[0]);
               cout<<-1<<" ";
               for(int i=1;i<n;i++){
                 while(s.empty()==false && s.top()<=arr[i]){
                    s.pop();
                 }
                 if(s.empty()){
                      cout<<-1<<" ";
                 }
                 else{
                     cout<<s.top()<<" ";
                 }
                 s.push(arr[i]);
               }

}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
void Nextgreat(int arr[],int n){
    stack <int> s;
      reverse(arr,n);
      int * ar = new int[n];
      s.push(arr[0]);
                 ar[0]=-1;
               for(int i=1;i<n;i++){
                 while(s.empty()==false && s.top()<=arr[i]){
                    s.pop();
                 }
                 if(s.empty()){
                      ar[i]=-1;
                 }
                 else{
                     ar[i]=s.top();
                 }
                 s.push(arr[i]);
               }
               reverse(ar,n);
               for(int i=0;i<n;i++){
                cout<<ar[i]<<" ";
               }

}

int main(){
        int arr[]={5,15,10,8,6,12};
        int n = sizeof(arr)/sizeof(int);
        previousGreat(arr,n);
        cout<<endl;
        Nextgreat(arr,n);

    return 0;
}