#include<bits/stdc++.h>
using namespace std;
void common(int input1[],int input2[],int input3[],int n1,int n2,int n3){
		for(int i=0;i<n1;i++){
		int flag=0;
		for(int j=0;j<n2;j++){
			if(input1[i]==input2[j]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			for(int k=0;k<n3;k++){
                if(input1[i]==input3[k]){
                   cout<<input1[i]<<" ";
                   break;
                }
			}
		}
	}

}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int input1[] = {1, 5, 10, 20, 40, 80};
  int input2[] = {6, 7, 20, 80, 100};
  int input3[] = {3, 4, 15, 20, 30, 70, 80, 120};
  int n1=sizeof(input1)/sizeof(input1[0]);
	int n2=sizeof(input2)/sizeof(input2[0]);
	int n3=sizeof(input3)/sizeof(input3[0]);
  common(input1,input2,input3,n1,n2,n3);
  return 0;
  }