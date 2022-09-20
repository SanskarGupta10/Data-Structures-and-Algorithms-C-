#include<iostream>
#include<algorithm>
using namespace std;
//implementation of doubly  linked list

struct node{
int data ;
struct node * next;
struct node * prev;
};

void printList(struct node * head){
    struct node * ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
     cout<<endl;
}
struct node * insertAtBeg(struct node * head,int value){
    struct node * ptr = new struct node;
    struct node * p = head;
      ptr->data = value;
       ptr->next = p;
       ptr->prev = NULL;
       p->prev = ptr;
       head = ptr;
    return head;
}

struct node * insertAtIndex(struct node * head,int value,int ind){
    struct node * ptr = new struct node;
    ptr->data = value;
    struct node * p = head;
    struct node * q = head->next;
    int i=0;
    while(i != ind -1){
        p = p->next;
        q = q->next;
        i++;
    }
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    q->prev = ptr;
   return head;
}
struct node * add(struct node * head,int value){
    struct node * ptr = new struct node;
    ptr->data = value;
    struct node * p = head;
    while(p->next != NULL){
         p = p->next;
    }
     p->next = ptr;
     ptr->next = NULL;
     ptr->prev = p;
     return head; 
}

struct node * deleteAtHead(struct node * head){
      struct node * p = head;
      head = p->next;
      head->prev = NULL;
      free(p);
      return head;
}
struct node * delAtLast(struct node *head){
    struct node * p = head;
    struct node * q = head->next;
    while(q->next != NULL){
        q = q->next;
        p = p->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node * delAtIndex(struct node * head,int index){
       struct node * p = head;
       struct node * q = head->next;
       struct node *r = head->next->next;
       int i=0;
       while(i != index-1){
        i++;
        p = p->next;
        q = q->next;
        r = r->next;
       }
       p->next = r;
       r->prev = p;
       free(q);
       return head;
}
void reverseTrav(struct node * head){
    struct node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->prev;
    }
    cout<<endl;
}
void isPalindrome(struct node * head){
    int ans = 0;
    struct node * p = head;
    struct node * q = head;
    while(p->next != NULL){
        p = p->next;
    }

    while(p != NULL && q != NULL){
        if(p->data == q->data){
            p = p->prev;
            q = q->next;
        }
        else{
        ans = 1;
        break;
        }
    }
    if(ans == 1){
        cout<<"Not a palindrome !"<<endl;
    }
    else{
        cout<<"Its a palindrome !"<<endl;
    }

}
  //sorting the unsorted linked list
  void sortLinkedList(struct node * head){
    struct node * p = head;
    int size = 0;
    while(p != NULL){
         p = p->next;
         size++;
    }
   cout<<"Size is :- "<<size<<endl;
    int * arr = new int[size];
     struct node * q = head;
     int i=0;
     while(q!=NULL){
        arr[i]= q->data;
        q=q->next;
        i++;
     }
        sort(arr,arr+size);
     cout<<"Printing the contents of the array ..."<<endl;
     for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
     }
     cout<<endl;
     struct node * r = head;
     int j = 0;
      while(r!=NULL && j<size){
          r->data = arr[j];
        r=r->next;
        j++;
     }

  }
  void printMid(struct node * head){
      struct node * p = head;
      struct node * q = head;
      while(q->next->next != NULL){
        q = q->next->next;
        p = p->next;
      }
      cout<<p->data<<endl;
}
void removeDup(struct node * head){
   sortLinkedList(head);
   struct node * p = head;
   struct node * q = head->next;
   int index = 1;
   while(p->data != q->data){
    p = p->next;
    q= q->next;
    index++;
   }
     head = delAtIndex(head,index);
}
void reverseLinkedList(struct node * head){
    //if the linked list having even number of nodes
    struct node * p = head;
    struct node * q = head;
    while(q->next != NULL){
        q = q->next;
    }
    struct node * mid = head;
    struct node * help = head;
    while(help->next->next != NULL){
        help = help->next->next;
        mid = mid->next;
    }
   struct node * mid1 = mid->next;
    int temp;
    while(p!=mid->next && q!=mid1->prev){
       temp = p->data;
       p->data = q->data;
       q->data = temp;
       p=p->next;
       q=q->prev;
    }
}
int detectLoop(struct node * head){
    int ans ;
    struct node * p = head;
    struct node * q = head;
    while(p->next != head && p->next != NULL){
        p = p->next;
    }
    if(p->next == head){
        cout<<"Yes its a loop !"<<endl;
        ans=1;
    }
    else{
        cout<<"No its not a loop !"<<endl;
        ans = 0;
    }
    return ans;
}
int main(){
    
    struct node * head = new struct node;
    head->next = NULL;
    head->prev = NULL;
    int x;
    cout<<"Enter the value of first element ? "<<endl;
    cin>>x;
    head->data = x;
   int n ;
   cout<<"Enter the number of nodes to be enter after the first node ? "<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<"Enter the element value ? "<<endl;
    cin>>x;
    head = add(head,x);
   }
   cout<<endl;
  
  printList(head);
   
   cout<<detectLoop(head);

    return 0;
}