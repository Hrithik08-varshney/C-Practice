#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int r,c,i,j;
  cin>>r>>c;
  int a[r+4][c+4],n;
  for (i=0;i<r;i++)
  {
  	for (j=0;j<c;j++)
  	{
  		cin>>a[i][j];
  	}
  }
  cin>>n;
  for (i=0;i<r;i++)
  {
  	for (j=0;j<c;j++)
  	{
  		if (n==a[i][j])
  		{
  			cout<<i+1<<" "<<j+1<<"\n";
  		}
  	}
  }
  return 0;
}