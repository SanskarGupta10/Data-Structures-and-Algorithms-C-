#include<iostream>
#include<algorithm>
using namespace std;

//merge overlap intervals naiive algo
//creating a special sort function
//removing the elements from the given index in an array
void removeEl(int arr[],int n,int index){
  for(int i= index;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  n = n-1;
  
}
void mergeInt(int arr[],int n){
    int ind;
    int i=0;
    int a;
  while(i<n){
         int j=0;
         if(i==a){
            i = i+2;
            continue;
         }
         for(int j = 0;j<n;j=j+2){
            
            if(i==j || j==a){
                continue;
            }
           else if((arr[i]<=arr[j] && arr[i+1] >= arr[j]) || (arr[j]<=arr[i] && arr[j+1]>=arr[i]) ){
                arr[i]= min(arr[i],arr[j]);
                arr[i+1]= max(arr[i+1],arr[j+1]);
                a = j;
               
            }
           
            
         }
       
       cout<<arr[i]<<" "<<arr[i+1]<<"  ";
       i=i+2;
  }

}
int main(){
    int arr[]={7,9,6,10,4,5,1,3,2,4};
    int n = sizeof(arr)/sizeof(int);
   
   
     cout<<endl;
   mergeInt(arr,n);
    return 0;
}