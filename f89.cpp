#include<iostream>
using namespace std;
//formation of doubly ended queues using arrays with simple implementation.
//doubly ended queue is used for insertion and deletion operations from both the ends.
//using non circular arrays
struct queue{
int * arr;
int size;
  int r;
  int f;
};
int isFull(struct queue * q){
  if(q->r == q->size -1){
    return 1;
  }
  else{
    return 0;
  }
}
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void push_front(struct queue * q,int value){
    if(isFull(q)){
        cout<<"Queue is Full !"<<endl;
    }
    else{
        if(q->f == -1){
            q->f = q->f + 1;
        }
        for(int i = q->r;i>=q->f;i--){
            q->arr[i+1]= q->arr[i];
        }
        q->arr[q->f]= value;
        q->r = q->r + 1;
    }
}
void push_back(struct queue *q,int value){
       if(isFull(q)){
        cout<<"Queue is Full !"<<endl;
       }
       else{
          q->r = q->r + 1;
          q->arr[q->r]= value;
       }
}
int pop_back(struct queue * q){
    int val = -1;
  if(isEmpty(q)){
    cout<<"Queue is Empty !"<<endl;
  }
  else{
      val = q->arr[q->r];
      q->r = q->r - 1; 
  }
  return val;
}
int pop_front(struct queue * q){
    int val = -1;
  if(isEmpty(q)){
    cout<<"Queue is Empty ! "<<endl;
  }
  else{
    q->f = q->f+1;
    val = q->arr[q->f];
  }
  return val;
}
void printQ(struct queue * q){
    if(q->f == -1){
        q->f = q->f + 1;
    }
    for(int i = q->f;i<=q->r;i++){
        cout<<q->arr[i]<<"  ";
    }
    cout<<endl;
}
int getRear(struct queue *q){
    return q->arr[q->r];
}
int getFront(struct queue *q){
    return q->arr[q->f];
}
int main(){
     struct queue q;
     cout<<"Enter the capacity of the queue? "<<endl;
     cin>>q.size;
     q.arr = new int[q.size];
     q.f = q.r = -1;
     push_back(&q,12);
      push_back(&q,32);
       push_back(&q,122);
        push_back(&q,112);
         push_back(&q,102);
         push_front(&q,37);
         printQ(&q);
         pop_front(&q);
         pop_back(&q);
         printQ(&q);
         cout<<"The front element is :- "<<getFront(&q)<<endl;
         cout<<"The rear element is :- "<<getRear(&q)<<endl;
    return 0;
}