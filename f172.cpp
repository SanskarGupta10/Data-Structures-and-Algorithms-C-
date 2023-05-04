//dynamic programming longest common subsequence using memoization
#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int m,int n,vector<int> memo[]){
    if(memo[m][n] != -1){
        return memo[m][n];
    }
    
           if(m==0||n==0){
            memo[m][n]=0;
           }
           else{
               if(s1[m-1]==s2[n-1]){
                memo[m][n] = 1+lcs(s1,s2,m-1,n-1,memo);
               }
               else{
                memo[m][n] = max(lcs(s1,s2,m,n-1,memo),lcs(s1,s2,m-1,n,memo));
               }
           }
    return memo[m][n];
   
}

int main(){
   string s1,s2;
   cout<<"Enter string s1 ?"<<endl;
   cin>>s1;
   cout<<"Enter string s2 ?"<<endl;
   cin>>s2;
   int m = s1.size();
   int n = s2.size();
   cout<<m<<" "<<n<<endl;
   vector<int> arr[n+1];
   for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        arr[i].push_back(-1);
    }
   }
   cout<<"Answer is := "<<lcs(s1,s2,m,n,arr)<<endl;
    return 0;
}