#include<iostream>
#include<algorithm>
using namespace std;

//merging overlapping intervals
struct Interval{
int st;
int end;
};
bool myCmp(struct Interval i1, struct Interval i2){
         bool flag = false;
         if(i1.st < i2.st){
            flag = true;
         }
         return flag;
}
void mergeIntervals(struct Interval arr[],int n){
    sort(arr,arr+n,myCmp);
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[res].end >= arr[i].st){
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st,arr[i].st);

        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++){
        cout<<arr[i].st<<" "<<arr[i].end<<"  ";
    }
}
int main(){
  struct Interval arr[]={{5,10},{2,3},{6,8},{1,7}};
  int n = sizeof(arr)/sizeof(Interval);
  mergeIntervals(arr,n);


    return 0;
}

