#include<iostream>
using namespace std;
//intersection of two sorted arrays
void intersect(int a[],int b[],int n,int m){

    

    for(int i=0;i<n;i++){
        if(a[i]==a[i+1] && i<n-1){
            continue;
        }
         for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<endl;
                break;
            }
         }

    }
}
//efficient solution
void inter(int a[],int b[],int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]>b[j]){
            j++;
        }
        if(a[i]<b[j]){
            i++;
        }
        if(a[i]==b[j]){
            cout<<a[i]<<endl;
            i++;
            j++;
            
        }
    }
}

int  main(){
   int a[]={1,1,3,3,3};
   int n = sizeof(a)/sizeof(int);
   int b[]={1,1,1,1,3,5,7};
   int m = sizeof(b)/sizeof(int);
   inter(a,b,n,m); 

    return 0;
}