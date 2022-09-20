#include<iostream>
using namespace std;

void leader(int arr[],int n){
    
for(int i=0;i<n;i++){
bool flag = false;
    for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j]){
       flag=true;
       break;
        }
    }

  if(flag==false){
    cout<<arr[i]<<endl;
} 
}

}
//efficient solution
void effSol(int arr[],int n){
int cur_lead = arr[n-1];
cout<<cur_lead<<endl;
for(int i=n-2;i>=0;i--){
if(cur_lead<arr[i]){
    cur_lead = arr[i];
    cout<<cur_lead<<endl;
}
}

}

int main(){
    int arr[]={1,3,4,19,10,11};
    int size = sizeof(arr)/sizeof(int);
    leader(arr,size);
    cout<<endl;
    effSol(arr,size);

    return 0;
}