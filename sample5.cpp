#include<iostream>
using namespace std;

int main(){
    int index ;
    int ans;
    
    while(true){
        cout<<"Enter the value of index ?"<<endl;
        cin>>index;
        if(index >-1 && index < 100){
             ans = index;
             break;
        }
    }
    cout<<"Tha value of ans is :- "<<ans<<endl;

    return 0;
}