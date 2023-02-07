//Heap
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
          Minheap m = Minheap(10);
         m.insert(40);
         m.insert(20);
         m.insert(30);
         m.insert(35);
         m.insert(25);
         m.insert(80);
         m.insert(32);
         m.insert(100);
         m.insert(70);
         m.insert(60);
          m.trav();

    return 0;
}