#include<bits/stdc++.h>
using namespace std;
int matchPat(string &str,string &pat){
        int res = 0;
          int m = str.length();
          int n = pat.length();
          for(int i=0;i<m-n+1;i++){
              string curr ="";
                for(int j=i;j<i+n;j++){
                   curr = curr + str[j]; 
                }
                if(curr == pat){
                    res = pat.length();
                    break;
                }
          }
          return res;
    }
    int wordBreak(string A, vector<string> &B) {
        int m = A.length();
        int vs = B.size();
        int ans = 0;
        int res = 0;
        for(int i=0;i<vs;i++){
            string ch = B[i];
            res = res + matchPat(A,ch);
            cout<<res<<endl;
        }
        if(res == m){
            ans = 1;
        }
        
        return ans;
    }
int main(){
     vector<string> B;
     B.push_back("i");
      B.push_back("like");
       B.push_back("sam");
        B.push_back("sung");
        string ptr = "ilike";
        cout<<wordBreak(ptr,B)<<endl;
       
    return 0;
}