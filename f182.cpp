//longest substring with distinct characters
#include<bits/stdc++.h>
using namespace std;

int longSDC(string &s1,int n){
    int res = INT_MIN;
    unordered_set<char> s;
    for(int i=0;i<n;i++){
        if(s.find(s1[i]) != s.end()){
            int c = s.size();
             res = max(res,c);
             s.clear();
        }
        s.insert(s1[i]);
    }
    return res;
}

int main(){
  string s1;
  cout<<"Enter string s1 ?"<<endl;
  cin>>s1;
  int n = s1.size();
  cout<<longSDC(s1,n)<<endl;
    return 0;
}