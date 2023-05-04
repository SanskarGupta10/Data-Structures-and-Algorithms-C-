//KMP lps problem self made.
#include<bits/stdc++.h>
using namespace std;

int * lpsA(string &text){
  int n = text.length();
  string curr = "";
  int * arr = new int[n];
  unordered_map<string,int> m;
     for(int i=0;i<n;i++){
        curr = curr+text[i];
        string p = "";
        m[p]++;
       for(int j=0;j<curr.length()-1;j++){
        p = p + curr[j];
        m[p]++;
       }
       string s = "";
       m[s]++;
       for(int j=curr.length()-1;j>=0;j--){
        s = s + curr[j];
        reverse(s.begin(),s.end());
        m[s]++;
        reverse(s.begin() ,s.end());
       }
       //now returning the largest value of proper prefix and suffix which are common.
       int res = 0;
       for(auto x : m){
            if(x.second > 1){
                string ch = x.first;
                int a = ch.length();
                res = max(res,a);
            }
       }
       arr[i] = res;
       m.clear();
     }
      return arr;
}
int main(){
     string text;
     cout<<"Enter the value of string ?"<<endl;
     cin>>text;
     int * ans = lpsA(text);
     int n = text.length();
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }

    return 0;
}