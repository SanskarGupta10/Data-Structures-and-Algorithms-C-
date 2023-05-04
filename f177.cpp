#include<bits/stdc++.h>
using namespace std;
//dynamic programming questions
int eD(string &s1,string &s2,int m,int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    if(s1[m-1]==s2[n-1]){
        return eD(s1,s2,m-1,n-1);
    }
    else{
        return 1+ min(min(eD(s1,s2,m-1,n),eD(s1,s2,m,n-1)),eD(s1,s2,m-1,n-1));
    }
}

int main(){
      string s1,s2;
      cout<<"Enter string s1 ?"<<endl;
      cin>>s1;
      cout<<"Enter string s2 ?"<<endl;
      cin>>s2;
      int m = s1.size();
      int n = s2.size();
      cout<<"Edit distance value is := "<<eD(s1,s2,m,n)<<endl;

    return 0;
}