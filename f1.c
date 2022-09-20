//counting the digit of a number
#include<stdio.h>

int countDigit(int n){
    int count = 0;
   while(n != 0){
  n = n/10;
   count++;
   }

return count;
}
// counting of digit using recursive approach
int digitRec(int n){
 
  if(n == 0){
    return 0;
  }
else{
    return 1 + digitRec(n/10);
}

}
int main(){
    int value;
    printf("Enter the value...\n");
    scanf("%d",&value);
    int count = digitRec(value);
    printf("Total no of digits are %d\n",count);
    

return 0;
}