//stock span problem
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
void stockSp(int arr[],int n){
       int ar[n];
       int res;
       for(int i=0;i<n;i++){
        res = 1;
                 for(int j=i-1;j>=0;j--){
                      if(arr[j]<arr[i]){
                      res++;
                      }
                      else{
                        break;
                      }
                 }
                 ar[i]=res;
       }
       for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
       }
    cout<<endl;
}

int main(){
   int arr[]={10,20,30,40,50};
   int n = sizeof(arr)/sizeof(int);
   stockSp(arr,n);

    return 0;
}