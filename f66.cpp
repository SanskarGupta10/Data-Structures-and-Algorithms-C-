#include<iostream>
using namespace std;
//count distinct elements in every window
void count(int arr[],int n,int k){
    int res =0;
//where k is the window size
for(int i=0;i<n-k+1;i++){
    int count = 0;
  for(int j=i;j<n-k+1;j++){
       int res=0;

        for(int p=j+1;p<j+k;p++){
            if(arr[j]==arr[p]){
             res = 1;
            break;
            }
           
        }
         if(res == 0){
                count++;
            }
        
  }
  cout<<count<<"\t";     
}

}
int main(){
      int arr[]={10,20,20,10,30,40,10};
      int n = sizeof(arr)/sizeof(int);
      count(arr,n,4);

    return 0;
}