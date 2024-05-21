#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int size,sum;
  cin>>size>>sum;
  int arr[size+4],b[size+4],i,s=0,trav=1,j;
  for (i=1;i<=size;i++)
  {
  	 cin>>arr[i];
  }
  for (i=1;i<=size;i++)
  {
         for (j=i;j<=size;j++,trav++)
         {
              s=s+arr[j];
              b[trav]=j;
              if (s==sum)
              {
              	cout<<b[1]<<","<<b[trav]<<"\n";
              }

         }
         trav=1;
         s=0;
  }
  return 0;
} 


