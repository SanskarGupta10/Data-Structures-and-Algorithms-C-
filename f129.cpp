//heap sort algorithm self made approach
#include<bits/stdc++.h>
using namespace std;
class Minheap{
    public:
int capacity;
int size;
int * arr;
public:
    Minheap(int c){
        arr = new int[c];
        size=0;
         capacity = c;
    }
    //methods
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i + 1;
    }
    int right(int i){
        return 2*i + 2;
    }
    void insert(int el){

        size++;
        arr[size-1] = el;
        int i = size-1;
         while(arr[parent(i)]>arr[i] && parent(i)>=0){
            swap(arr[parent(i)],arr[i]);
            i =parent(i);
        }
        
        
    }
    void trav(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
  Minheap m = Minheap(20);
     cout<<"Enter the number of elements you wants to get added ?"<<endl;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cout<<"Enter Element ?"<<endl;
        cin>>x;
        //building the heap
        m.insert(x);
     }
     m.trav();
    return 0;
}