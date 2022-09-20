//code of n queen problems 
#include<bits/stdc++.h>
using namespace std;

//safe function 
//1 denotes the position of the queen and 0 denotes the empty position
void printMatrix(int * board[],int N){
 for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
 }

}
bool isSafe(int row ,int col,int * board[],int N){
    //check this row on the left side
         for(int i=0;i<col;i++){
             if(board[row][i]){
                return false;
             }
         }
         /* Check upper diagonal on left side */
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	/* Check lower diagonal on left side */
	for (int i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;
         
         return true;
}
bool solveRec(int col,int * board[],int N){
    

     if(col==N){
        return true;
     }
     for(int i=0;i<N;i++){
        if(isSafe(i,col,board,N)){
            board[i][col]=1;
            if(solveRec(col+1,board,N)){
                return true;
            }
            board[i][col]=0;
        }
     }
   return false;
}
bool solve(int * board[],int N){
    if(solveRec(0,board,N)==false){
        cout<<"Not such case is possible !"<<endl;
        return false;
    }
    
        printMatrix(board,N);
        return true;
    
}

int main(){
   int N;
   cout<<"Enter the value of N?"<<endl;
   cin>>N;
   int * board[N];
   for(int i=0;i<N;i++){
    board[i] = new int[N];
    for(int j=0;j<N;j++){
        board[i][j]=0;
    }
   }
   solve(board,N);
    return 0;
}