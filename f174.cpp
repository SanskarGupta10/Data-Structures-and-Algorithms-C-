//longest palindromic subsequence
#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int m,int n){
     
     if(m==0 || n==0){
        return 0;
     }
     
        if(s1[m-1]==s2[n-1]){
            return  1 + lcs(s1,s2,m-1,n-1);
        }
        else{
            return  max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
        }
}
void lps(string s1,int m){
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    int res = lcs(s1,s2,m,m);
    cout<<" The value of palindromic subsequence is := "<<res<<endl;
}

int main(){
    string s1;
    cout<<"Enter string s1 ?"<<endl;
    cin>>s1;
    int m = s1.size();
    lps(s1,m);
    return 0;
}