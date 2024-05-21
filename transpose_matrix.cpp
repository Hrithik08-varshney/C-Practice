#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int row_mat,i,j;
  cin>>row_mat;
  int a[row_mat+4][row_mat+4],b[row_mat+4][row_mat+4];
  for (i=0;i<row_mat;i++)
  {
  	for (j=0;j<row_mat;j++)
  	{
  		cin>>a[i][j];
  	}
  }
  for (i=0;i<row_mat;i++)
  {
      for (j=0;j<row_mat;j++)
      {
      	b[j][i]=a[i][j];
      }
  }
  for (i=0;i<row_mat;i++)
  {
  	for (j=0;j<row_mat;j++)
  	{
  		cout<<b[i][j]<<" ";
  	}
  	cout<<"\n";
  }
  return 0;
}
