#include<bits/stdc++.h> 
using namespace std;
int selsort(int arr[],int n){
    int small,pos,tmp;
    for (int i=0;i<n;i++){
      small=arr[i];
      pos=i;
      for(int j=i+1;j<=n;j++){
        if(arr[j]<small){
          small=arr[j];
          pos=j;
        }
      }
      tmp=arr[i];
      arr[i]=arr[pos];
      arr[pos]=tmp;
    }
    for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
return 0;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,arr[15];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selsort(arr,n);
  return 0;
}