#include<iostream>
using namespace std;
//modified version of a code to also tell the power of two if there
void powTwo(int n){
  int tog =0;
  int count =0;
    if(n ==0){
        cout<<"False!"<<endl;
    }
    while(n>1){
   if(n%2 != 0){
     tog = 1;
     break;
   }
   else{
    count++;
   }
  n = n/2;
    }
    if(tog == 1){
        cout<<"It can't be representated as a power of 2!"<<endl;
    }
    else{
        cout<<"It can be representated as a power of 2 !"<<endl;
        cout<<"The power of two is "<<count<<endl;
    }

}

int main(){
int value;
cout<<"Enter the value ?"<<endl;
cin>>value;
powTwo(value);


}