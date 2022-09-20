//reversing the queue using stl
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQ(queue <int> &q){
        stack <int> s;
        while(q.empty()==false){
            s.push(q.front());
            q.pop();
        }
        while(s.empty()==false){
            q.push(s.top());
            s.pop();
        }
}
void printQ(queue <int> &q){
   while(q.empty()==false){
      cout<<q.front()<<" ";
      q.pop();
   }

}

int main(){
    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(4);
    q.push(5);
    q.push(8);
    reverseQ(q);
    printQ(q);
    return 0;
}