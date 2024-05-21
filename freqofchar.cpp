#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	      freopen("input.txt","r",stdin);
	      freopen("output.txt","w",stdout);
	#endif
	      char str[10],c;
	      int count=0,i ; 
	      cin>>str;
	      cin>>c;
	      for (i=0;str[i]!='\0';i++)
	      {
             if (c==str[i])
             {
             	count++;
             }
	      }
	      cout<<"count="<<count;
	      return 0;
	  }
