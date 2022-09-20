#include<iostream>
using namespace std;
//median of two sorted arrays
void median2Sort(int a1[],int a2[],int m,int n){
    //creation of the new array
    int size = m+n;
    int a3[size];
    int j=0;
    int k=0;
    int i=0;
    
      while(j<m && k<n){
        if(a1[j]<a2[k]){
            a3[i]=a1[j];
            j++;
            i++;
        }
      else{
        a3[i]=a2[k];
        k++;
        i++;
      }
      }
    
    while(j<m){
        a3[i]=a1[j];
        i++;
        j++;

    }
    while(k<n){
        a3[i]=a2[k];
        i++;
        k++;

    }

    for(int i=0;i<size;i++){
        cout<<a3[i]<<"\t";
    }
    //sorting using merge sort
    cout<<endl;
    float median;
    if(size%2==0){
   median = (a3[(size-1)/2] + a3[size/2])/2.0;
         cout<<"Median is :- "<<median<<endl;
    }
    else{
        median = a3[(size-1)/2];
        cout<<"Median is :- "<<median<<endl;
    }
}
int main(){
    int a1[]={10,20,30,40,50};
    int s1=sizeof(a1)/sizeof(int);
    int a2[]={5,15,25,35,45};
    int s2=sizeof(a2)/sizeof(int);
    median2Sort(a1,a2,s1,s2);
    return 0;
}