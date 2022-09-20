#include<iostream>
#include<deque>
using namespace std;
//making of data structure with min / max operations
struct ds{
deque <int> d;
void insertMin(int x){
   d.push_front(x);
}
void insertMax(int x){
    d.push_back(x);
}
void extractMin(){
    d.pop_front();
}
void extractMax(){
    d.pop_back();
}
int getMin(){
    return d.front();
}
int getMax(){
    return d.back();
}

};
int main(){
   struct ds a;
   a.insertMin(3);
   a.insertMin(1);
   a.insertMax(5);
   a.insertMax(12);
   cout<<a.getMin()<<endl;
   cout<<a.getMax()<<endl;

    return 0;
}