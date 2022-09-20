#include<iostream>
#include<deque>
using namespace std;

int main(){
       deque <int> dq;
       dq.push_back(12);
       dq.push_back(89);
       for(auto x : dq){
        cout<<x<<endl;
       }
    return 0;
}