//infix to postfix conversions and infix to prefix conversions including parenthesis.
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
void push(struct stack * s,char ch){
   if(isFull(s)){
    cout<<"Stack OverFlow !"<<endl;
   }
   else{
    s->top = s->top + 1;
    s->arr[s->top]= ch;
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
int precedence(char ch){
    if(ch == '^'){
        return 4;
    }
   if(ch=='*' || ch=='/'){
    return 3;
   }
      if(ch == '+' || ch == '-'){
        return 2;
      }
      if(ch == '('){
        return 1;
      }
      else{
        return 0;
      }
}
int isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='('){
        return 1;
    }
    else{
        return 0;
    }
}

//reversing the string
string reverseStr(string infix){
    int n = infix.length();
    string reverse = "";
    for(int i=n-1;i>=0;i--){
        reverse = reverse + infix[i];
    }
    return reverse;
}
//func to convert infix to prefix
string intopre(string infix){
 struct stack * s = new struct stack;
       s->size = 100;
       s->top = -1;
       s->arr = new char[s->size];
       string infix1 = reverseStr(infix);
       string postfix = "";
       int i = 0;
       
       while(infix1[i] != '\0'){
          if(!isOperator(infix[i])){
              postfix = postfix + infix1[i];
              i++;
            
          }
         if(infix[i]=='('){
                        push(s,infix[i]);
                        i++;
                    }
        else if(infix[i]==')'){
                        while(stackTop(s) != '(' && !isEmpty(s) ){
                            postfix = postfix + stackTop(s);
                            pop(s);
                        }
                        pop(s);
                          i++;
                    }
              
                  else { 
                   

                 if(precedence(infix1[i]) > precedence(stackTop(s))){
                      push(s,infix1[i]);
                         i++;
                  }
                  else{
                     postfix = postfix + pop(s);
                     }
                  }
       }

       while(!isEmpty(s)){
        postfix = postfix + pop(s);
       }
       string prefix =  reverseStr(postfix);
        return prefix;
}
//func to convert infix to postfix
string intopo(string infix){
    struct stack * s = new struct stack;
       s->size = 100;
       s->top = -1;
       s->arr = new char[s->size];
    
       

       string postfix = "";
       int i = 0;
       
       while(infix[i] != '\0'){
          if(!isOperator(infix[i])){
              postfix = postfix + infix[i];
              i++;
            
          }
         if(infix[i]=='('){
                        push(s,infix[i]);
                        i++;
                    }
        else if(infix[i]==')'){
                        while(stackTop(s) != '(' && !isEmpty(s) ){
                            postfix = postfix + stackTop(s);
                            pop(s);
                        }
                        pop(s);
                          i++;
                    }
                  else { 
                     if(precedence(infix[i]) > precedence(stackTop(s))){
                      push(s,infix[i]);
                         i++;
                  }
                  else{
                    postfix = postfix + pop(s);
                  }
       }
       }

       while(!isEmpty(s)){
       postfix = postfix + pop(s);
       }
        return postfix;
}
int main(){
        string infix = "(a+b)-(c+d)";
        cout<<"The postfix string is :- "<<intopo(infix)<<endl;
        cout<<"The prefix string is :- "<<intopre(infix)<<endl;
       
    return 0;
}