#include<bits/stdc++.h>
//it imports all the libraries
using namespace std;
string encrypt(string str){
    string res="";
   
    
      for(int i=0;i<str.length();i++){
       int x =str[i];
       if(x>=65&&x<=90||x>=48&&x<=57){
        res = res + str[i];
       }
      }
         return res;
}

int main(){
     string str;
     cout<<"Enter the string value?"<<endl;
     cin>>str;
     cout<<str.length()<<endl;
     cout<<encrypt(str);

    return 0;
}