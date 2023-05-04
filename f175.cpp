#include<bits/stdc++.h>
using namespace std;
//shortest common supersequence 
int lcs(string s1,string s2,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(s1[m-1]==s2[n-1]){
        return 1 + lcs(s1,s2,m-1,n-1);
    }
    else{
        return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
    }
}
int shortestCS(string s1,string s2,int m,int n){
    int l = lcs(s1,s2,m,n);
    return m+n-l;
}
int main(){
   string s1,s2;
   cout<<"Enter string s1 ?"<<endl;
   cin>>s1;
   cout<<"Enter string s2 ?"<<endl;
   cin>>s2;
   int m = s1.size();
   int n = s2.size();
   cout<<"The length of shortest common subsequence is := "<<shortestCS(s1,s2,m,n)<<endl;
    return 0;
}