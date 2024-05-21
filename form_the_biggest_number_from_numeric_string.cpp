#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string str;
  cin>>str;
  sort(str.begin(),str.end());
  reverse(str.begin(),str.end());
  cout<<str;
    return 0;
}