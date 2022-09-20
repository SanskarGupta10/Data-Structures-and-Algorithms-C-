#include<iostream>
#include<math.h>
using namespace std;

int output(int x[],int y[],int r[],int n){
    float d;
    int count = 0;
   for(int i=0;i<n;i++){
    for(int j =i+1;j<n;j++){
              d = pow(((pow((x[i]-x[j]),2.0))+pow((y[i]-y[j]),2.0)),0.5);
              
              if(d< r[i]+r[j]){
                count++;
              }
              d=0.0;
    }

   }
 return count;

}
int main(){
  int n;
  cin>>n;
  int res = 0;
  //constraint fixed
  if(n<2 && n>10000){
    cout<<"Error !"<<endl;
      res = 1;
    
    }
   
    int x[n];
    int y[n];
    int r[n];
    //adding constraints to the x , y and r
  for(int i=0;i<n;i++){
    cin>>x[i];
      if(x[i]<0){
        cout<<"Error !"<<endl;
        break;
      }
  }
   for(int i=0;i<n;i++){
    cin>>y[i];
      if(y[i]<0){
        cout<<"Error !"<<endl;
        break;
      }
  }
   for(int i=0;i<n;i++){
    cin>>r[i];
      if(r[i]<=0){
        cout<<"Error !"<<endl;
        break;
      }
  }
  
   

  cout<<"No of overlapping circles to be removed :- "<<output(x,y,r,n)<<endl;
    return 0;
}