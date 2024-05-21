#include<bits/stdc++.h>
using namespace std;
void peak(int arr[],int n){
	if(n<3)
		cout<<"Array size is not sufficient";

	else if(n==3){
		if(arr[n-2]>arr[0] && arr[n-2]>arr[n-1])
			cout<<arr[n-2]<<endl;
	}
	
	else {

		for(int k=1;k<n-1;k++){
			int flag=0;
			for(int i=k-1,j=k+1;j!=n && i>=0;i--,j++){
				if(arr[k]<arr[i] || arr[k]<arr[j]){
				flag=1;
				break;
			 }
			}
			if(flag==0)
			cout<<arr[k]<<endl;
		}

	}
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  peak(arr,n);
  return 0;
}