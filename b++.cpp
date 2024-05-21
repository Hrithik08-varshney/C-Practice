#include<bits/stdc++.h>
#include<string> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,x=0,i;
  cin>>n;
  string s;
  while (n--)
  {
  	cin>>s;
  	for(i=0;i<3;i++)
  	{
  		if (s[i]=='+')
  		{
  			x++;
  			break;
  		}
  	else
  		if (s[i]=='-')
  		{
  			x--;
  			break;
  		}
  	}

  }

   cout<<x;
   return 0;
}