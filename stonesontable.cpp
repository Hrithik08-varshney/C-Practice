#include<bits/stdc++.h> 
#include<string.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,count=0,i;
  string s;
  for (i=0;i<n;i++)
  {
  	if(s[i]==s[i+1])
  		count++;
  }
  cout<<count;
  return 0;
}