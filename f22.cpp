
#include<bits/stdc++.h>
using namespace std;
 //tower of hanoi implementation
 //let n be a number of discs
 //a be a stand a
 //stand b
 //stand c
 void tOh(int n,char a,char b,char c){
    //its implementation can be done by thinking of 2 disc kept on a and to be placed at c where b is the intermediate stand
    if(n==1){
        cout<<"Move disc 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    tOh(n-1,a,c,b);
    cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
    tOh(n-1,b,a,c);


 }
int main(){
 //let n no of discs are there
 char a = 'A';
 char b = 'B';
 char c = 'C';
 int n = 3;
 tOh(n,a,b,c); 
return 0;
}