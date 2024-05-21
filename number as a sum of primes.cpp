#include<bits/stdc++.h>
using namespace std;
bool checkprime(int sub){
    int f=0;
    for(int i=2;i<sub;i++){
        if(sub%i==0){
            f=1;
            break;
        }
    }
    if(f==0){
        return true;
    }
    else
        return false;
}

void uptoprime(int n){
     for(int i=2;i<=n/2;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
             int sub=n-i;
             if(checkprime(sub)){
                cout<<sub<<"+"<<i<<endl;
             }
        }
     }
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  if(n<=3)
    cout<<"No sum can be determine";
  else
  uptoprime(n);
  return 0;
}