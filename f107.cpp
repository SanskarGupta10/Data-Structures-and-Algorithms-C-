//balancing of the parenthesis in string
#include<iostream>
using namespace std;
struct stack{
int size;
int top;
char * arr;
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
char pop(struct stack * s){
    int val = '0';
    if(isEmpty(s)){
        cout<<"Stack UnderFlow !"<<endl;
    }
    else{
   val = s->arr[s->top];
   s->top--;
    }
    return val;
}
char stackTop(struct stack * s){
    return s->arr[s->top];
}
char stackBottom(struct stack * s){
    return s->arr[0];
}
char stackIndex(struct stack * s,int index){
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
int match(char a,char b){
    if(a == '[' && b == ']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    return 0;
}
int checkparenthesis(string str){
    char popped_ch;
    struct stack * s = new struct stack;
    s->size = 100;
    s->top = -1;
    s->arr = new char[s->size];
         for(int i=0;str[i] != '\0';i++){
            if(str[i]=='[' || str[i]=='{' || str[i]=='('){
                    push(s,str[i]);
            }
            else if(str[i]==']' || str[i]=='}' || str[i]==')'){
                     if(isEmpty(s)){
                        return 0;
                     }
                      popped_ch= pop(s);
                      if(!match(popped_ch,str[i])){
                        return 0;
                      }
            }
         }
         if(isEmpty(s)){
            return 1;
         }


}

int main(){
    string str = "(a+b+c)-d}";
    cout<<checkparenthesis(str)<<endl;

    return 0;
}