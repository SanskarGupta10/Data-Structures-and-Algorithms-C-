//kmp string matching algorithm as well as kmp lps problem
#include<bits/stdc++.h>
using namespace std;
//finding the lps;
int * lpss(string &str){
int n = str.length();
int * lps = new int[n];
int len = 0;
lps[0]=0;
int i=1;
while(i<n){
    if(str[len]==str[i]){
        len++;
        lps[i] = len;
        i++;
    }
    else if(str[len] != str[i]){
        if(len==0){
            lps[i]=0;
            i++;
        }
        else{
            len = lps[len-1];
        }
    }
}
return lps;
}
//now performing string matching
void matchPat(string &txt,string &pat){
    int n = txt.length();
    int m = pat.length();
    int *lps = lpss(pat);
    int i=0;
    int j=0;
    while(i<n){
        if(j==m){
            cout<<i-j<<endl;
            j = lps[j-1];
        }
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        else if(i<n && txt[i]!=pat[j]){
            if(j==0){
                i++;
            }
            else{
                j = lps[j-1];
            }
        }
    }
   if(j==0){
    cout<<"Not Found"<<endl;
   }
}
int main(){
   string txt = "abcdaaa";
   string pat = "aaa";
   matchPat(txt,pat);

    return 0;
}