//generating numbers with using some sets of words using queues
#include<iostream>
#include<queue>
#include<string>
using namespace std;

void generateR(string n,string m,int size){
    queue <string> q;
    q.push(n);
    q.push(m);
    for(int i=0;i<size;i++){
    string curr = q.front();
    cout<<curr<<" ";
    q.pop();
    q.push(curr+"5");
    q.push(curr+"6");
    }
}

int main(){
   string n,m;
   int size;
   cout<<"Enter n and m and size "<<endl;
   cin>>n;
   cin>>m;
   cin>>size;
   generateR(n,m,size);

    return 0;
}