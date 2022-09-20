#include<bits/stdc++.h>
using namespace std;
//important
void permute(string str,int i=0){
  if(i == str.length()-1 && (str != "abc" && str != "cab")){
    cout<<str<<" ";
  }
  else{
         for(int j = i;j<str.length();j++){
            swap(str[i],str[j]);
            permute(str,i+1);
            swap(str[j],str[i]);
         }
  }

}

int main(){
    string str = "abc";
    permute(str);
    return 0;
}