#include<iostream>
#include<limits.h>
using namespace std;

int maxDiff(int arr[],int n){
    int count =0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      count++;
    }
}
int ar[count];
int c=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        
            ar[c]=arr[j]-arr[i];
            c++;
        
      
    }
}
int max= INT_MIN;
for(int i=0;i<count;i++){
    if(max<ar[i]){
        max = ar[i];
    }
}

return max;
}


int main(){
    int arr[]={4,5,6,9,22};
    int size = sizeof(arr)/sizeof(int);
    cout<<maxDiff(arr,size);

    return 0;
}