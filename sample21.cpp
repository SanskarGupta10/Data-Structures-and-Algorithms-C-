#include<bits/stdc++.h>
using namespace std;
//reversing the words in a string
void reverseW(string &str,int low,int high){
      while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
      }
      cout<<str<<endl;
}
void reverseLine(string &str){
    int n = str.size();
    int st = 0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
               reverseW(str,st,i-1);
               cout<<str<<" ";
               st = i+1;
        }
    }
         reverseW(str,st,n-1);
         reverse(str.begin(),str.end());
         cout<<str<<endl;
}

int main(){
    string str = "I LOVE INDIA";
    reverseLine(str);
    return 0;
}