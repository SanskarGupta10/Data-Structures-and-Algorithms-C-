#include<bits/stdc++.h>
using namespace std;
// Barclays question on to find the number of 3 occuring in digit from 1 to any given input number n
int findAns(int n,int c){
    int res = 0;
     vector<int> v1;
            for(int i=1;i<=n;i++){
                int k = i;
                 while(k>0){
                 int j = k%10;
                 v1.push_back(j);
                 k = k/10;
                 }
            }
            for(int i=0;i<v1.size();i++){
                if(v1[i]==c){
                    res++;
                }
            }
          
      return res;   
}


int main(){
     int n,c;
     cout<<"Enter any number n ?"<<endl;
     cin>>n;
     cout<<"Enter the digit which has to be occured ?"<<endl;
     cin>>c;
     cout<<"Number of digits of given input c from 1 to n is := "<<findAns(n,c)<<endl;
    return 0;
}