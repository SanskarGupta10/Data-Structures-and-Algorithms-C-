#include<iostream>
#include<stdlib.h>
using namespace std;
//implementation of queue without stl
struct queue{
int * arr;
int f,r;
int size;
};
int isEmpty(struct queue *q){
    if(q->f == q->r){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct queue *q){
    if(q->r == q->size -1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue * q,int value){
if(isFull(q)){
    cout<<"Queue is full!"<<endl;
}
else{
    q->r = q->r + 1;
    q->arr[q->r]= value;
    }
}
int dequeue(struct queue *q){
    int val = -1;
    if(isEmpty(q)){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        q->f = q->f + 1;
        val = q->arr[q->f];
}
return val;
}
int front(struct queue *q){
    return q->arr[q->f];
}
int rear(struct queue * q){
    return q->arr[q->r];
}
//to print the contents of the queue
void printQ(struct queue *q){
    if(q->f == -1){
        q->f = q->f + 1;
    }
    for(int i= q->f;i< q->size;i++ ){
       cout<<q->arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct queue q;
    cout<<"Enter the size of the queue?"<<endl;
    cin>>q.size;
    q.f = q.r = -1;
    q.arr = new int[q.size];
   int n;
   for(int i=0;i<q.size;i++){
       cout<<"Enter the value?"<<endl;
       cin>>n;
       enqueue(&q,n);
       n=0;
   }
    printQ(&q);
    cout<<"The front element of the queue is :- "<<front(&q)<<endl;
    cout<<"The rear element of the queue is :- "<<rear(&q)<<endl;
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    printQ(&q);


    return 0;
}