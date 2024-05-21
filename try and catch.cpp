
#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
 /* try{
  	int age=15;
  	if(age>=18){
  		cout<<"Access granted - you are old enough .";
  	}
  	else{
  		throw(age);
  	}
  }
  catch(int myNum){
  	cout<<"Access Denied - You mus be atleast 18.\n";
  	cout<<"Age is : "<<myNum;
  }*/
  try{
  	int age=15;
  	if(age>=18){
  		cout<<"Access granted -you are old enough ";
  	}
  	else{
  		throw "error";
  	}
  }
  catch(...){
  	cout<<"Error";
  }
}