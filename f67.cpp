#include<iostream>
#include<unordered_set>
using namespace std;
//efficient sol to count distinct elements
void countDis(int arr[],int n,int k){
//k is sthe size of the window

for(int i=0;i<n-k+1;i++){
    unordered_set <int> s;
  for(int j=i;j<i+k;j++){
    if(s.find(arr[j]) == s.end()){
        s.insert(arr[j]);
    }
   
  }   
    cout<<s.size()<<"\t"; 
    s.clear();

}


}
int main(){
     int arr[]={10,20,20,10,30,40,10};
      int n = sizeof(arr)/sizeof(int);
      countDis(arr,n,4);
    return 0;
}