//implementation of circular list
#include<iostream>
using namespace std;

struct node{
int data ;
struct node * next;
struct node * prev;
};

void printList(struct node * head){
    struct node * ptr = head;
    while(ptr->next != head){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        
    }
    cout<<ptr->data;
    cout<<endl;
}
void reverseList(struct node * head){
    struct node * ptr = head;
    while(ptr->next != head){
       
        ptr = ptr->next;
    }
    while(ptr != head){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
    cout<<ptr->data<<" ";
    cout<<endl;
}

//to add elements in the linked list after the first node and before the last node.
struct node * add(struct node * head,struct node *last,int value){
    struct node * ptr = head;
    struct node * p = new struct node;
    p->data = value;
      while(ptr->next != last){
          ptr = ptr->next;
      }
      ptr->next = p;
      p->next = last;
      last->prev = p;
      p->prev =ptr;
      return head;
}
//to add before head and make that element as the head
struct node * addAtLast( struct node *head,int value){
    struct node * ptr = new struct node;
    ptr->data = value;
   struct node * p = head;
   while(p->next != head){
     p = p->next;
   }
     p->next = ptr;
     ptr->next = head;
     ptr->prev = p;
     head->prev = ptr;
     head = ptr;
     return head;  
}

 //to delete all the elements
 //to delete the elemnt at the beginning
 struct node * deleteAtHead(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    struct node * r = head->next->next;
    while(q!=head){
        q = q->next;
        p=p->next;
        r = r->next;
    }
    p->next = r;
    r->prev = p;
    free(q);
    head = r;
    return head;
 }
 //to delete the elements at the kth index
 struct node * deleteAtK(struct node * head,struct node *last,int k){
    int i = 0;
    struct node * p = last;
    struct node * q = head;
    struct node * r = head->next;
    while(i != k-1){
     p = p->next;
     q= q->next;
     r = r->next;
     i++;
    }
    p->next = r;
    r->prev = p;
    free(q);
    return head;
 }
//to detect whether the linked list is circular or not
int detectLoop(struct node * head){
    int ans;
    struct node * p = head;
    while(p->next != head && p->next != NULL){
        p = p->next;
    }
    if(p->next == head){
        cout<<"Yes its a loop !"<<endl;
        ans = 1;
    }
    else{
        cout<<"No its not a loop !"<<endl;
        ans = 0;
    }
    return ans;
}
void removeLoop(struct node * head){
 int check = detectLoop(head);
 if(check == 1){
    struct node * p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = NULL;
    head->prev = NULL;
 }
 else{
    cout<<"Its no a loop already !"<<endl;
 }
}
int main(){
       struct node * head = new struct node;
       struct node * last = new struct node;
       head->next = last;
       head->prev = last;
       last->next = head;
       last->prev = head;
       cout<<"Enter the values of first and last element?"<<endl;
       cin>>head->data;
       cin>>last->data;
       int n;
       cout<<"Enter the number of nodes to be added in this circular linked list between  first and last node ?"<<endl;
       cin>>n;
       int value;
       for(int i=0;i<n;i++){
             cout<<"Enter the value of this node ?"<<endl;
             cin>>value;
             head = add(head,last,value);
       }
      
      
       printList(head);
       reverseList(head);
       cout<<detectLoop(head)<<endl;
       removeLoop(head);
       cout<<detectLoop(head);
    return 0;
}