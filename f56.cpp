#include<iostream>
using namespace std;

int getSum(int preSum[],int l,int r){
    int sum ;
    if(l!=0){
  sum = preSum[r]-preSum[l-1];
    }
    else{
        sum = preSum[r];
    }
return sum;
}

int equiPoint(int arr[],int n){
int preSum[n];
preSum[0]=arr[0];
for(int i=1;i<n;i++){
preSum[i]= preSum[i-1]+arr[i];

}
int rsum;
int lsum;
for(int i=0;i<n;i++){
 if(i==0){
    rsum = getSum(preSum,1,n-1);
    if(rsum == 0){
        return arr[i];
    }
 }
 if(i==n-1){
    lsum = getSum(preSum,0,n-2);
    if(lsum==0){
        return arr[i];
    }
 }
 else{
   lsum =getSum(preSum,0,i-1);
    rsum = getSum(preSum,i+1,n-1);
    if(rsum == lsum){
        return arr[i];
    }
 }

}
 return -200000;
}


int main(){
 int arr[]={23,78,-78,-23,44};
    int n = sizeof(arr)/sizeof(int);
    int ans = equiPoint(arr,n);
if(ans>-200000){
    cout<<"The equilibrium point is :- "<<ans<<endl;
}
else{
    cout<<"No equi point exist ! "<<endl;
}


    return 0;
}