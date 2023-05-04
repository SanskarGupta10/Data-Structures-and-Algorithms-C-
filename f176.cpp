//Printing the string of lcs dynamic programming
#include<bits/stdc++.h>
using namespace std;
void lcsString(string s1, string s2 ,int m,int n){
            int dp[m+1][n+1];
            for(int i=0;i<=m;i++){
                for(int j=0;j<=n;j++){
                    if(i==0 || j==0){
                        dp[i][j] = 0;
                    }
                    else if(s1[i-1] == s2[j-1]){
                         dp[i][j] = 1 + dp[i-1][j-1];
                    }
                    else{
                           dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            // now printing the string
            int i = m;
            int j = n;
            string ans = "";
            while(i>0 && j>0){
                 if(s1[i-1]==s2[j-1]){
                       ans = ans + s1[i-1];
                       i--;
                       j--;
                 }
                 else if(dp[i-1][j]>dp[i][j-1]){
                           i--;
                 }
                 else{
                    j--;
                 }
            }
            reverse(ans.begin(),ans.end());
            cout<<"The output lcs string is := "<<ans<<endl;
}

int main(){
    string s1,s2;
    cout<<"Enter string s1 ?"<<endl;
    cin>>s1;
    cout<<"Enter string s2 ?"<<endl;
    cin>>s2;
    int m = s1.size();
    int n = s2.size();
    lcsString(s1,s2,m,n);
    return 0;
}