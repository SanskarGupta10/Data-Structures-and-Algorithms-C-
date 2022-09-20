//implementation of stack using queues
#include<iostream>
#include<queue>
using namespace std;

struct stack{
 queue <int>  q1,q2;
 int top(){
    return q1.front();
 }

 

 void push(int x){
    while(q1.empty()==false){
        q2.push(q1.front());
        q1.pop();

    }
    q1.push(x);
    while(q2.empty()==false){
        q1.push(q2.front());
        q2.pop();
    }
 }

    int pop(){
        return q1.front();
    }
      int * arr= new int[q1.size()];
    void printS(){
     
       int i = 0;
      while(q1.empty()==false){
       arr[i]= q1.front();
       q1.pop();
       i++;
      }
      for(int j=0;j<i;j++){
        cout<<arr[j]<<" ";
      }
      
    }

};
int main(){
   struct stack s;
   s.push(23);
   s.push(32);
   s.push(19);
   s.push(71);
   s.push(89);
   s.push(91);
   cout<<"Printing the elements of the stack from the top :- "<<endl;
   s.printS();

    return 0;
}