#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
//implementation of queue using stl in c++
//printing the elements of the queue

void printQ(queue <int> &q){
    while(q.empty()== false){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue <int> q;
    q.push(12);
    q.push(23);
    q.push(35);
    q.push(49);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size();
    cout<<endl;
       printQ(q);
       
    return 0;
}