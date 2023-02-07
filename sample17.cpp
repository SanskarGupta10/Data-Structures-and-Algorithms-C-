//ritakshi challenge 2
#include<bits/stdc++.h>
using namespace std;
//comparison function
bool myCmp(pair<int,int> a,pair<int,int>b){
      if(a.first<b.first){
        return true;
      }
      return false;
}
void mergeIntervals(pair<int,int> ad[],int n){
     sort(ad,ad+n,myCmp);
     pair<int,int>c={ad[0].first,ad[0].second};
     pair<int,int>prev={INFINITY,INFINITY};
     for(int i=1;i<n;i++){
            
        if(c.second >= ad[i].second){
                       c = {c.first,c.second};
                        }
                     
         else if(c.second < ad[i].second && c.second>=ad[i].first){
                       c = {c.first,ad[i].second};
                         }

         else if(c.second<ad[i].first){
                        c={ad[i].first,ad[i].second};
                        
            }
            if(prev != c){
                cout<<c.first<<" "<<c.second<<" ";
                }
       
            prev = {c.first,c.second}; 
     }

}

int main(){
    pair<int,int> ad[] = {{1,4},{4,5},{2,7},{3,7}};
    int n = sizeof(ad)/sizeof(pair<int,int>);
    cout<<"Merged Intervals are := "<<endl;
    mergeIntervals(ad,n);
    return 0;
}