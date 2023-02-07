#include<bits/stdc++.h>
using namespace std;

struct node{
   struct node * next;
   struct node * arb;
   int key;

};
struct node *  insertAtLast(struct node * head,int value,struct node * rand){
        struct node * n = new struct node;
        n->key = value;
        struct node * ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
        n->next = NULL;
        if(rand != NULL){
          n->arb = rand;
        }
         return head;
}
void printLL(struct node * head){
  struct node * ptr = head;
  while(ptr != NULL){
    cout<<ptr->key<<" ";
    cout<<"Arbitary pointer value := "<<ptr->arb->key<<" ";
    ptr = ptr->next;
    cout<<endl;
  } 

}


struct node * clonedList(struct node * head){
  struct node * cloneHead = new struct node;
   cloneHead->next = NULL;
   cloneHead->key = head->key;
   cloneHead->arb = head->arb;
         struct node * ptr = head->next;
         while(ptr != NULL){
            cloneHead = insertAtLast(cloneHead,ptr->key,ptr->arb);
            ptr = ptr->next;
            
         }
         return cloneHead;
}
int isClone(struct node * head,struct node * cloneHead){
  int ans = 1;
    struct node * p = head;
    struct node * q = cloneHead;
    while(p->next!=NULL && q->next!=NULL){
         if(p->next->key != q->next->key || p->arb->key != q->arb->key || p->key != q->key){
               ans =0;
               break;
         }
         else{
          p = p->next;
          q= q->next;
         }
    }
      return ans;
}

int main(){
  //input given example
  struct node * one = new struct node;
  struct node * two = new struct node;
   struct node * three = new struct node;
    struct node * four = new struct node;
     struct node * five = new struct node;
     one->next= two;
     one->arb = three;
     one->key = 1;
     two->next = three;
     two->arb = one;
     two ->key = 2;
     three->next = four;
     three->arb = five;
     three->key = 3;
     four->next = five;
     four->arb = three;
     four->key = 4;
     five->next = NULL;
     five->arb = two;
     five->key = 5;
    
    
    cout<<"Printing original Linked list := "<<endl;
    printLL(one);
     struct node * cloneHead = clonedList(one);
     cout<<endl<<"Printing Cloned Linked List := "<<endl;
     printLL(cloneHead);
     cout<<"The output whether the linked list is clone correctly or not is := "<<isClone(one,cloneHead)<<endl;
    
    return 0;
}