//strings naive pattern searching
#include<bits/stdc++.h>
using namespace std;

void naivePS(string &s1,string &s2,int m,int n){
  int c;
      int res = 0;
    for(int i=0;i<m-n+1;i++){
      string str = "";
      c = i;
      for(int j=i;j<i+n;j++){
        str = str+s1[j];

      }
         if(str == s2){
          cout<<c<<" ";
          res++;
         }
    }
    cout<<endl<<"The number of times this string occurs := "<<res<<endl;

}
 int len(string &str,string &pat,int n,int m){
	        int res = 0;
	     
	        for(int i=0;i<n-m+1;i++){
	            string curr="";
	             for(int j=i;j<i+m;j++){
	                 curr = curr + str[j];
	             }
	             if(curr == pat){
	                 res++;
	             }
	        }
	        return res;
	    }
void LongestRepeatingSubsequence(string &str){
		    int res = 0;
		    int n = str.length();
		     string curr="";
		    for(int i=0;i<n-1;i++){
		          curr = curr + str[i];
		          if(str[i]==str[i+1]){
		               curr = curr + str[i+1];
		              int m = curr.length();
                  int c = len(str,curr,n,m);
                  res = max(res,c);
		          }
              else if(str[i]!=str[i+1]){
                curr = "";
              }
		        }
		        cout<<res;
		    }
		   
		
int main(){
string s1,s2;
cout<<"Enter string s1 ?"<<endl;
cin>>s1;
cout<<"Enter string s2 ?"<<endl;
cin>>s2;
int m = s1.size();
int n = s2.size();
LongestRepeatingSubsequence(s1);
  return 0;
}