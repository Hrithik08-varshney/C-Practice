/*#include<bits/stdc++.h>
using namespace std;
int func(int a,int b){
  if(a<b)
    return func(b,a);
  else if(b!=0)
    return (a*func(a,b-1));
  else
    return 0;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif*/
  /*int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int flag=0;
    if(s.size()==1)
      cout<<"No"<<endl;
    else{
    for(int i=0;i<s.size();i++){
      for(int j=i+1;j<s.size();j++){
      if(s[i]==s[j]){
        flag=1;
        break;
      }
    }
      if(flag==1){
      cout<<"Yes"<<endl;
      break;
    }
  }
      if(flag==0)
      cout<<"No"<<endl;
  }
}*/


// CPP program to illustrate
// gcd function of C++ STL

 /* pair<int,string>p;
  p={2,"Hello"};
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,string>&p1=p;
  p1.first=3;
  cout<<p1.first<<" "<<p1.second<<endl;
  cout<<p.first<<" "<<p.second<<endl;*/

 /* cout<<func(5,5);*/

  /*char x[]="hello ji";
  cout<<sizeof(*x)<<""<<sizeof(x);*/

  /*int i;
  const char *arr[]={"Prep","Bytes","Coding","Platform"};
  const char *(*ptr)[4]=&arr;
  cout<<++(*ptr)[2];
return 0;
}*/

//Solution and use of getline after cin
#include<bits/stdc++.h>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  /*int n;
  cin>>n;
  string num;
  getline(cin >> ws,num);
  reverse(num.begin(),num.end());
  cout<<num;*/
  int size;  //size of an array by user
  cin>>size;  //eg :- 4
  int arr[size];  //array size of 4
  for(int i=0;i<size;i++){
    cin>>arr[i]; //input in array
  }
  for(int i=size-1;i>=0;i--){
    cout<<arr[i]<<" ";   //reverse output i=3/2/1/0
                        // arr[3]=4,arr[2]=3,arr[1]=2,
                          //arr[0]=1
  }
}