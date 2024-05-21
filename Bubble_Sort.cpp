#include<bits/stdc++.h> 
using namespace std;
int bubblesort(int arr[],int n){
  int temp;
  for(int i=0;i<n;i++){
     for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
     }
     for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";
     }
     cout<<"\n";
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
  bubblesort(arr,n);
  return 0;
}