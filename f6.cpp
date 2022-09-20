#include<iostream>
#include<algorithm>
using namespace std;
//printing the divisors of a given number
void divisors(int n){
    int count = 0;
for(int i=2;i<n;i++){
    if(n%i==0){
        count++;
    }
}
  int arr[count];
  int j = 0;
  for(int i=2;i<n;i++){
    if(n%i==0){
        arr[j]=i;
        j++;
    }
  }
  //printing the divisors
  for(int k =0;k<count;k++){
    cout<<"Divisor"<<k+1<<" is "<<arr[k]<<endl;
  }

}
int checkPrime(int n){
    int chk = 0;
for(int i =2;i<n;i++){
   if(n%i ==0){
    chk = 1;
    break;

   }

}
return chk;
}
//checking the prime factors of a number
void printPrime(int n){
  int count = 0;
  //to check whether the given number is prime or not
  if(checkPrime(n)){

for(int i=2;i<n;i++){
    if(n%i==0){
        count++;
    }
}
  int arr[count];
  int j = 0;
  for(int i=2;i<n;i++){
    if(n%i==0){
        arr[j]=i;
        j++;
    }
  }
  for(int k =0;k<count;k++){
    int fine = 0;
     if(arr[k]>=2 && arr[k]<=3){
        cout<<arr[k]<<endl;
     }
     else{
     for(int i=2;i<arr[k];i++){
        if(arr[k]%i ==0){
         fine = 1;
        }
      
     }
      if(fine ==0){
        cout<<arr[k]<<endl;

      }
      else{
        fine--;
      }
     }
  } }
  else{
    cout<<n<<" is a prime number itself!"<<endl;
  }

}

int main(){
int value;
cout<<"Enter the value?"<<endl;
cin>>value;
printPrime(value);
    return 0;
}