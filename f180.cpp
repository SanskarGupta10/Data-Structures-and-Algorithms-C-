//check for the rotation in the string
#include<bits/stdc++.h>
using namespace std;
void leftRotate(string &s1,int n){
  for(int i=n-1;i>0;i--){
      swap(s1[i],s1[i-1]);
  }
}
void rightRotate(string &s1,int n){
  for(int i=0;i<n-1;i++){
         swap(s1[i],s1[i+1]);
   }
}

void checkR(string &s1,string &s2,int m,int n){
    if(m != n){
        cout<<"No"<<endl;
    }
    int dec = 0;
    string check = s1;
    //n length of string specifies there needs to be n rotations to achieve the original string form
    for(int i=0;i<n;i++){
        leftRotate(check,m);
        if(check==s2){
           dec =1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        rightRotate(s1,m);
        if(s1==s2){
           dec=1;
            break;
        }
    }
    if(dec==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
string s1,s2;
cout<<"Enter string s1 ?"<<endl;
cin>>s1;
cout<<"Enter string s2 ?"<<endl;
cin>>s2;
int m = s1.size();
int n = s2.size();
checkR(s1,s2,m,n);
    return 0;
}