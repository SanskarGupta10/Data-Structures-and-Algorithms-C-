//check whether the anagram of the pattern string is present in the text string or not
#include<bits/stdc++.h>
using namespace std;

void checkAna(string &s1,string &s2,int m,int n){
    int dec = 0;
    sort(s2.begin(),s2.end());
    for(int i=0;i<m-n+1;i++){
      string str = "";
      for(int j=i;j<i+n;j++){
        str = str+s1[j];
      }
        sort(str.begin(),str.end());
         if(str == s2){
           dec = 1;
           break;
         }
    }
    if(dec==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
checkAna(s1,s2,m,n);

    return 0;
}