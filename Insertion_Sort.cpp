#include<bits/stdc++.h> 
using namespace std;
int insertionsort(int arr[],int n){
  for (int i=1;i<n;i++){

    int temp=arr[i],j=i-1;
    while(arr[j]>temp && j>=0){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
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
  insertionsort(arr,n);
  return 0;
}