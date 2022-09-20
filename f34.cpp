#include<iostream>
using namespace std;
int nlefInd(string str){
    bool flag = false;
    int size = str.length();

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
      
            if(i!=j && str[i]==str[j]){
                flag = true;
                break;
            }
            
        }
        if(flag == false){
            return i;
        }
    }
      return -1; 
}
int main(){
    string str = "aaabc";
    cout<<"The index of leftmost non repeating element is "<<nlefInd(str)<<endl;

    return 0;
}