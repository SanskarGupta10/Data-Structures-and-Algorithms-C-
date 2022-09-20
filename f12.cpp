#include<iostream>
using namespace std;

void kBit(int n,int k){
int i =0;
int arr[32];
int temp,count;
count =0;
if(n==0){
    cout<<"0";
}
while(n>0){
    if(n%2 != 0){
        arr[i] = 1;
        i++;
        count++;
    }
    else{
        arr[i]=0;
        i++;
    }
    n=n/2;
}

//reversing an array
for(int j=0;j<i/2;j++){
temp = arr[j];
arr[j]=arr[i-j-1];
arr[i-j-1]=temp;
}


//to find whether the kth bit is set or not
if(arr[i-k]==1){
    cout<<"Yes,the k th bit is set !"<<endl;

}
else{
    cout<<"No,the k th bit is not set !"<<endl;
}
//printing the array containing binary representation
cout<<"The binary representation of a given number is "<<endl;
for(int j=0;j<i;j++){
    cout<<arr[j];
}
//to find the number of set bits
cout<<" \n The number of set bits is "<<count<<endl;

}

int main(){
    int value;
    cout<<"Enter the value ?"<<endl;
    cin>>value;
    kBit(value,4);

    return 0;
}