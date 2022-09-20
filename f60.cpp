#include<iostream>
#include<stdlib.h>
using namespace std;
//find the max appearing elemnet in these ranges
void selectSort(int * arr,int n){
    int temp;
for(int i=0;i<n-1;i++){
  int   indexOfMin = i;
    for(int j=i+1;j<n;j++){
        if(arr[indexOfMin]>arr[j]){
            indexOfMin = j;
        }
    }
    temp = arr[i];
    arr[i]=arr[indexOfMin];
    arr[indexOfMin]=temp;
}
 for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
 }
}
int max(int arr[],int n){
    int count;
    int res=0;
    for(int i=0;i<n;i++){
        count=1;
          for(int j=i+1;j<n;j++){    
        if(arr[i]==arr[j]){
            count++;
            
        }
          }
      res = max(res,count);
    }
      
      int ans ;
      for(int i=0;i<n;i++){
        ans=1;
          for(int j=i+1;j<n;j++){    
        if(arr[i]==arr[j]){
            ans++;
            
        }
          }
          if(ans==res){
            return arr[i];
          }
    }
       return -1;
}

void maxApp(int L[],int R[],int n){
    int size =0;
    
    for(int i=0;i<n;i++){
        size = size+ R[i]-L[i]+1;
    }
     
    cout<<size<<endl;
  int merge[size];
  int i=0;
  int k=0;
    while( i<n){
        for(int j=L[i];j<=R[i];j++){
      merge[k]=j;
      k++;
        }
        i++;
    }
    
  for(int i=0;i<size;i++){
    cout<<merge[i]<<endl;
  } 
  cout<<endl;
  selectSort(merge,size);
  int ans = max(merge,size);
  cout<<endl;
  cout<<"Maximum Appearing element present in these ranges :- "<<ans<<endl;
    
}

int main(){
    int L[]={1,5,4,7};
    int R[]={7,12,8,20};
    int n = sizeof(L)/sizeof(int);
    maxApp(L,R,n);



    return 0;
}