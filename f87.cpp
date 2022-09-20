//implementation of queues using linked list without having c++ stl in use
#include<iostream>
#include<stdlib.h>
using namespace std;
//declaring r and f as the global  variables
struct node * f = NULL;
struct node * r = NULL;
struct node
{
 int data;
 struct node * next;
};
int isFull(){
  struct node * n = new struct node;
  if(n ==  NULL){
    return 1;
  }
  else{
    return 0;
  }

}
int isEmpty(){
    //f should not be pointing towards null inorder to remain not empty
      if(f == NULL){
        return 1;
      }
      else{
        return 0;
      }
}
void enqueue(int value){
    if(isFull()){
        cout<<"Queue is Full !"<<endl;
    }
    else{
    struct node * n = new struct node;
    n->data = value;
    n->next = NULL;
    if(f==NULL){
        f=r=n;
    }
    else{
        r->next = n;
        r=n;
    }
 }
}
int dequeue(){
   int val = -1;
    if(isEmpty()){
        cout<<"Queue is Empty !"<<endl;
    }
   else{
    struct node * ptr = f;
    val = ptr->data;
    f = f->next;
    free(ptr);
   }
   return val;
} 
void printEl(){
  struct node * ptr = f;
  while(ptr != NULL){
    cout<<ptr->data<<" ";
    ptr = ptr->next;
  }
  cout<<endl;

}
int getFront(){
    return f->data;
}
int getRear(){
    return r->data;
}

int main(){
    enqueue(12);
    enqueue(24);
    enqueue(39);
    enqueue(46);
    enqueue(57);
    enqueue(68);
    enqueue(2);
    printEl();
    dequeue();
 printEl();
 cout<<getFront()<<endl;
 cout<<getRear()<<endl;
    return 0;
}