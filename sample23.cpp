//reversing the words in a string
#include<bits/stdc++.h>
using namespace std;

void reverseL(string &str,stack <string> &s){
     string ans = "";
     int n = str.size();
    
     for(int i=0;i<n;i++){
        ans=ans+str[i];
       if(str[i] == ' '){
              s.push(ans);
              ans = "";
        }
        else if(i==n-1){
            s.push(ans);
            ans = "";
        }
     }
}

int main(){
    string str;
    cout<<"Enter the string ?"<<endl;
    getline(cin,str);
    stack<string> s;
    reverseL(str,s);
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}