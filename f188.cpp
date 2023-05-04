//Rabin Karp String matching algorithm
#include<bits/stdc++.h>
using namespace std;
#define d 256

void rabinKarpAl(string &pat,string &text,int q){
    int m = pat.length();
    int n = text.length();
    int h = 1;
    for(int i=1;i<=m-1;i++){
        h = (h*d)%q;
    }
    int p=0;
    int t=0;
    for(int i=0;i<m;i++){
        p = (p*d + pat[i])%q;
        t = (t*d + text[i])%q;
    }
    for(int i=0;i<=n-m;i++){
        if(p==t){
            bool flag = true;
            for(int j=0;j<m;j++){
                if(text[i+j]!=pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag==true){
                cout<<i<<" ";
            }
        }
        if(i<n-m){
            t = (d*(t- text[i]*h) +text[i+m])%q;
            if(t<0){
                t = t + q;
            }
        }
    }
}
int main(){
    string text="iloveritakshiandritakshilovesme";
    string pat = "ritakshi";
    int q = INT_MAX;
    rabinKarpAl(pat,text,q);
    return 0;
}