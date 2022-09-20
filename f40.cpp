#include<iostream>
using namespace std;

const int r1=2;
const int c1=3;
const int r2=3;
const int c2=3;
//matrix multiplication
 void matrixMul(int mat1[r1][c1],int mat2[r2][c2]){
if(c1==r2){
    int result[r1][c2];
for(int i=0;i<r1;i++){
   for(int j=0;j<c2;j++){
  result[i][j]=0;
  for(int k=0;k<r2;k++){
    result[i][j]= result[i][j]+ mat1[i][k]*mat2[k][j];
  }
 cout<<result[i][j]<<"\t";
   } 
   cout<<endl;
}
}



 }

int main(){
int mat1[r1][c1]={{1,2,3},
                   {4,5,6}};

int mat2[r2][c2]={{3,6,7},
                   {4,9,8},
                   {10,2,1}};
matrixMul(mat1,mat2);
    return 0;
}