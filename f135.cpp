//median of the stream self made approach
#include<bits/stdc++.h>
using namespace std;
//finding the median
float median(int arr[],int s,int e){
    float mid;
    int size = e-s+1;
    sort(arr,arr+size);
    if(size%2==0){
      mid = (float)(arr[(size/2)-1] + arr[(size/2)])/2;
    }
    else if(size%2 !=0){
        mid = (float)arr[(size-1)/2];
    }
    return mid;
}

void printSMed(int arr[],int n){
    vector<float> v;
    for(int i=0;i<n;i++){
        v.push_back(median(arr,0,i));
    }
    //printing the output stream
    cout<<"The output stream is := "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
   int arr[]={20,10,30,7};
   int n = sizeof(arr)/sizeof(int);
   printSMed(arr,n);
    return 0;
}