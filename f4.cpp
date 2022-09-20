#include<iostream>
#include<algorithm>
// to find the hcf of two numbers 

using namespace std;

//using naive method
int hcf(int a,int b){
    int res = min(a,b);

    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
//using euclidean method
int hcf1(int a,int b){
  while(a != b){
   if(a > b){
    a = a-b;
   }
   else
   {
    b = b-a;
   }

  }
    return a;
}
//finding the lcm using efficient method
int lcm(int a,int b){
 return (a*b)/hcf1(a,b);

}
int main(){
    int a ,b;
    a=3;
    b=6;
    int h = hcf(a,b);
    int k = hcf1(a,b);
    int l = lcm(a,b);
    cout<<"The hcf value of a and b is "<<h<<endl;
    cout<<"The hcf value of a and b is "<<k<<endl;
    cout<<"The lcm value of a nad b is"<<l<<endl;
    


    return 0;
}