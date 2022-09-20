//Array implementation of the stack
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
void push(struct stack * s,int x){
   if(isFull(s)){
    cout<<"Stack OverFlow !"<<endl;
   }
   else{
    s->top = s->top + 1;
    s->arr[s->top]=x;
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
int main(){
    struct stack * s;
    int n;
    cout<<"Enter the size of the stack ?"<<endl;
    cin>>n;
    s->size = n;
    s->top = -1;
    s->arr = new int[s->size];
    int m;
    cout<<"How much elements you want to get inserted in the stack? "<<endl;
    cin>>m;
    int x;
    for(int i=0;i<m;i++){
        cout<<"Enter the value ?"<<endl;
        cin>>x;
        push(s,x);

    }
    cout<<pop(s)<<endl;
    cout<<stackIndex(s,5)<<endl;
    printStack(s);


    return 0;
}