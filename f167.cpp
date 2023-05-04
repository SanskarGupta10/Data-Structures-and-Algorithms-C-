#include<bits/stdc++.h>
using namespace std;
//solving count distinct rows in a abinary matrix by self made approaches
void countDR(string arr[],int v){
    unordered_set<string> s;
    for(int i=0;i<v;i++){
        s.insert(arr[i]);
    }
// printing the contents of the set
cout<<"Content of the set are := "<<endl;
   for(string x : s){
    cout<<x<<endl;
   } 
   cout<<endl<<"The number of distinct rows are := "<<s.size()<<endl;
}
int main(){
    int v;
    cout<<"Enter the value of v ?"<<endl;
    cin>>v;
    string * arr = new string[v];
    
    for(int i=0;i<v;i++){
         string pt;
         cout<<"Enter the value ?"<<endl;
         cin>>pt;
         arr[i] = pt;
    }
    countDR(arr,v);
   return 0;
}