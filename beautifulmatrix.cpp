#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a[8][8],i,j,row,col,c;
  for (i=1;i<=5;i++)
  {
  	for (j=1;j<=5;j++)
  	{
  		cin>>a[i][j];
  		if (a[i][j]==1)
  		{
  			row=i;
  			col=j;
  		}
  	}
  }
  c=abs(row-3)+abs(col-3);
  cout<<c;

return 0;
}