#include<iostream>
using namespace std;
//designing a stack in such a way that we can implement getMin() in O(1).
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
void pushMin(struct stack * s,int ch){
   if(isFull(s)){
    cout<<"Stack OverFlow !"<<endl;
   }
   else if(isEmpty(s)){
    push(s,ch);
   }
  
   else{
     int x = s->arr[s->top];
   
          if(ch < x ){
                 push(s,ch);
          }
          else if(ch > x){
              push(s,ch);
              int temp;
              temp = s->arr[s->top];
              s->arr[s->top] = s->arr[s->top -1];
              s->arr[s->top -1] = temp;
          }
          
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
int getMin(struct stack * s){
    return s->arr[s->top];
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
    int n;
    cout<<"Enter the size of the stack ?"<<endl;
    cin>>n;
         struct stack * s = new struct stack;
         s->size = n;
         s->top = -1;
         s->arr = new int[n];

         pushMin(s,12);
         pushMin(s,18);
         pushMin(s,5);
         pushMin(s,3);
         pushMin(s,0);
         pushMin(s,99);
         pushMin(s,-999);
         cout<<"The min element is := "<<getMin(s)<<endl;
         cout<<"The max element is := "<<stackBottom(s)<<endl;ii
         printStack(s);
          
    return 0;
}