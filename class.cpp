#include<bits/stdc++.h>
using namespace std;
class Student{
	string city;
public:
	int rollno;
	string name;
	char gender;

	Student(){}

	Student(int r,string n,char g,string c){
		rollno=r;
		name=n;
		gender=g;
		city=c;
	}
	Student(Student &x){
		rollno=x.rollno;
		name=x.name;
		gender=x.gender;
		city=x.city;
	}
	void setCity(string c){
		city=c;
	}
	void print(){
  	cout<<" "<<rollno<<" "<<name<<" "<<gender<<" "<<city<<"\n";
	}
};
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
/*
Student s1;
s1.rollno=1;
s1.name="Hrithik";
s1.gender='M';
cout<<s1.rollno<<" "<<s1.name<<" "<<s1.gender;*/

  Student arr[3];
  for(int i=0;i<3;i++){
  	string c;
  	cin>>arr[i].rollno>>arr[i].name>>arr[i].gender>>c;
  	arr[i].setCity(c);
  }
  for(int i=0;i<3;i++){
  	arr[i].print();
  }
 Student T(4,"MotanNishu",'F',"Bihar");
  T.print();
  Student j(T);
  j.print();
return 0;
}