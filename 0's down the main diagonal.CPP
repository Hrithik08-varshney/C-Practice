#include<bits/stdc++.h>
using namespace std;
void diagonal(int n){
    for (int i = 0; i <n; ++i)
    {
        /* code */
        int val=i,c=0;
        for (int j = 0; j < n; ++j,val--)
        {
            /* code */
            if(j<i)
            cout<<val<<" ";
        else
          {
            cout<<c<<" ";
            c++;
           }
        }
        cout<<"\n";

    }
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n;
  cin>>n;
  diagonal(n);
  return 0;
}