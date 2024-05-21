#include<bits/stdc++.h> 
using namespace std;

//Complex number class 
class Complex
{

int real, imag;

public:

//Default constructor 
Complex(){
real = 0; imag = 0;
}

//Parameterised constructor 
Complex(int val){
real = val; imag = val;
}

//Parameterised constructor 
Complex(int val1, int val2){
real = val1; imag = val2;
}

//Adds two complex numbers and returns result
 Complex add(Complex C){
real = real + C.real; imag = imag + C.imag; return *this;
}

//Prints complex number as "A + Bi"
 void print(){
   cout << real << " + " << imag << "i\n";
 }
};

int main()
{
   #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
//Default constructor used 
	Complex C;

//Parameterised constructor used 
	Complex A(-2);

//Parameterised constructor used 
	Complex B(7, -3);
A.print();
B.print();

// Add two complex numbers and store in C 
C = A.add(B);

// Print sum
cout << "Complex C (sum): ";

C.print();
 return 0;
}
