#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//power sets using iterative approach
void powerSet(char *arr, int size ){


int powSize = pow(2,size);

for(int counter =0; counter<powSize;counter++){
  for(int j=0;j<size;j++){
  if(counter & (1<<j)){
    cout<<arr[j];
  }

  }
  cout<<endl;
}
}
//solving this using recursive approach
void subSets(string str,string curr = "",int i =0){
if(i == str.length()){//because at this index the null character is placed
    cout<<curr<<endl;
    return;
}
 subSets(str,curr,i+1);
 subSets(str,curr + str[i],i+1);

}
int main(){
 char arr[]="Sanskar";
 int size = sizeof(arr)/sizeof(char);
 cout<<size;
 size--;
 powerSet(arr,size);
 cout<<endl;
 cout<<endl;
 subSets(arr);
    return 0;
}