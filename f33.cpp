#include<iostream>
#include<math.h>
using namespace std;

//check if a string is subsequece of other
void check(string s1,string s2 ){
//to get all the subsets of string s1
int count = s1.length();
int counter = pow(2,count);
string st[counter];
st[0]=""; //means null string
int k =0;


for(int i=0;i<counter;i++){
  for(int j=0;j<count;j++){
    if(i & (1<<j)){
        st[k] = st[k]+s1[j];
    }
  }
 k++;
}
 int ans = 0;
for(int k=0;k<counter;k++){
    if(s2 == st[k]){
       ans = 1; 
    }
    
}
if(ans ==1){
    cout<<"It is subsequence !"<<endl;
}
else{
    cout<<"its not the subsequence !"<<endl;
}

}


int main(){
  string s1 = "abcd";
  string s2 = "ad";
  check(s1,s2);
    return 0;
}