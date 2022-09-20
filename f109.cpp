#include<iostream>
using namespace std;

struct stack{
int size;
int top;
int * arr;
};

int isEmpty(struct stack * s){
if(s->top == -1){
    return 1;
}
else{
    return 0;
}

}
int isFull(struct stack * s){
  if(s->top == s->size -1){
    return 1;
  }
   else{
    return 0;
   }
}
void push(struct stack * s,int ch){
   if(isFull(s)){
    cout<<"Stack OverFlow !"<<endl;
   }
   else{
    s->top = s->top + 1;
    s->arr[s->top]= ch;
   }
}
void push2(struct stack * s,int ch){
   if(isFull(s)){
    cout<<"Stack OverFlow !"<<endl;
   }
   else{
    s->top = s->top - 1;
    s->arr[s->top]= ch;
   }
}
int pop(struct stack * s){
    int val = -1;
    if(isEmpty(s)){
        cout<<"Stack UnderFlow !"<<endl;
    }
    else{
   val = s->arr[s->top];
   s->top--;
    }
    return val;
}
int stackTop(struct stack * s){
    return s->arr[s->top];
}
int stackBottom(struct stack * s){
    return s->arr[0];
}
int stackIndex(struct stack * s,int index){
      if(s->size - index <0){
        cout<<"Not a valid index !"<<endl;
      }
      else{
        return s->arr[s->size - index];
      }
}
void printStack(struct stack * s){
   if(isEmpty(s)){
    cout<<"Stack is Empty !"<<endl;
   }
   else{
             for(int i=0;i<=s->top;i++){
                cout<<s->arr[i]<<" ";
             }
   }
}



void initialize(int * arr,int n){
    //assigning the value to all elements of an array
    for(int i=0;i<n;i++){
        arr[i]=-111;
    }
  
}
void pushSt(int * arr,int n,struct stack *s, int x){
       push(s,x);
       arr[s->top]=stackTop(s);
}
void pushSt2(int * arr,int n,struct stack *s2, int x){
       push2(s2,x);
       arr[s2->top]=stackTop(s2);
}
void printAr2(int * arr,int n){
    for(int i=0;i<n;i++){
       
            cout<<arr[i]<<" ";
        
    }
}
int main(){
    int * arr = new int[15];
    initialize(arr,15);
     struct stack * s = new struct stack;
    struct stack * s2 = new struct stack;
    s->size = 100;
    s2->size = 100;
    s->top = -1;
    s2->top = 15;
    s->arr = new int[s->size];
    s2->arr = new int[s2->size];
    
         pushSt(arr,15,s,4);
         pushSt2(arr,15,s2,5);
         pushSt(arr,15,s,9);
         pushSt(arr,15,s,9);
         pushSt2(arr,15,s2,10);
    printAr2(arr,15);
    return 0;
}