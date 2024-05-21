#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int r1,r2,c1,c2,i,j,k;
  cin>>r1>>c1>>c2;
  r2=c1;
  int a[r1+4][c1+4],b[c1+4][c2+4],ans[r1+4][c2+4];

  //For input in first loop 

  for (i=0;i<r1;i++)
  {
  	for (j=0;j<c1;j++)
  	{
  		cin>>a[i][j];
  	}
  }

  //For input in second loop


  for (i=0;i<c1;i++)
  {
  	for (j=0;j<c2;j++)
  	{
  		cin>>b[i][j];
  	}
  }

  //For intializing array with value zero


  for (i=0;i<r1;i++)
  {
  	for (j=0;j<c2;j++)
  	{
  		ans[i][j]=0;
  	}
  }

  //For computing Answer


  for (i=0;i<r1;i++)
  {
  	for (j=0;j<c2;j++)
  	{
      for (k=0;k<c1;k++)
      {
      	ans[i][j]+=a[i][k]*b[k][j];
      }
  	}
  }

  //For output of Matrix

  
  for (i=0;i<r1;i++)
  {
  	for (j=0;j<c2;j++)
  	{
  		cout<<ans[i][j]<<" ";
  	}
  	cout<<"\n";
  }
return 0;
}
