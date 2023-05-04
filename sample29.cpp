#include<bits/stdc++.h>
using namespace std;
//longest even word length in a string JPMC question
string longeven(string &str){
    string curr="";
    int res = 0;
    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i] == ' '){
            int len = curr.length();
            if(len%2==0){
            res = max(res,len);
            }
            curr="";
            
        }
        else if(i==n-1){
         curr = curr+str[i];
         int len = curr.length();
       if(len%2 == 0){
            res = max(res,len);
       }
        }
        else{
        curr = curr+str[i];
        }
    }
    string ans = "00";
    for(int i=0;i<n;i++){
        if(str[i] == ' '){
            int len = curr.length();
            if(len==res){
              ans = curr;
            }
            curr="";
            
        }
        else if(i==n-1){
         curr = curr+str[i];
         int len = curr.length();
         
       if(len == res){
            ans = curr;
       }
        }
        else{
        curr = curr+str[i];
        }
    }
    return ans;
}

int main(){
   string str = "i love you cuties aaaa aaaa aaaaaaaa";
   cout<<longeven(str)<<endl;

    return 0;
}