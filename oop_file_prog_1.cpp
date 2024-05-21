// a program for multiplication of two matrices using
         // Object-Oriented Programming (OOP).


#include<bits/stdc++.h> 
using namespace std;

class Matrix
{ 
  int ROWS, COLS;
int MATRIX[100][100];

public:
  //Default Constructor
  Matrix(){
     for (int i = 0; i < ROWS; i++)
         for (int j = 0; j < COLS; j++)
             MATRIX[i][j] = 0;
         }
  // Sets rows
  void set_rows(int R){
  ROWS = R;
  }

  //Sets columns 
  void set_cols(int C){
     COLS = C;
  }
  //Inputs Matrix
  void Input(){
    for (int i=0;i<ROWS;i++){
      for(int j=0;j<COLS;j++){
        cin>>MATRIX[i][j];
      }
    }
  }
  //Multiplies two matrices and return the result
  Matrix multiply(Matrix M)
  {
    Matrix ANS;
    if(COLS != M.COLS){
      cout<<"Matrix multiplication not possible .\n";
      return *this;
    }
    else{
    
    ANS.set_rows(ROWS);
    ANS.set_cols(M.COLS);
    //Multiply respective rows and columns and store answer in ANS matrix
    for(int i=0;i<ROWS;i++)
      for (int j=0;j<M.COLS;j++)
        for(int k=0;k<COLS;k++)
          ANS.MATRIX[i][j] = ANS.MATRIX[i][j]+(MATRIX[i][k]*M.MATRIX[k][j]);
         }
          return ANS;
        
      }
  //Prints matrix
  void print(){
    for (int i=0;i<ROWS;i++){
      for (int j=0;j<COLS;j++){
        cout<<MATRIX[i][j]<<"\t";
      }
      cout<<"\n";
    }
  }
};
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Matrix A,B;
  int r,c;
  //Input rows and columns for matrix A
  cin>>r;  
  A.set_rows(r);
  cin>>c; 
  A.set_cols(c);

  //Input rows and columns for matrix B
  cin>>r;  
  B.set_rows(r);
  cin>>c; 
  B.set_cols(c);

  //Input matrix A
  A.Input();
  //Input matrix B
  B.Input();

  //Creating new object and storing result in it

  Matrix C;
  C=A.multiply(B);

  //Print Multiplied Matrix

  cout<<"Multiplied Matrix \n \n ";
  C.print();
  return 0;
}