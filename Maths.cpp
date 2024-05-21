#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  lli r;
    int c;
    cin>>r>>c;
    lli arr[c],count=0;
    for(lli i=3;i<=r;i+=2){
        if(i%2!=0)
        count+=10;
    }
       if(r%2==0){
           lli cal=1;
    for(lli j=1;j<=5;j++){
        arr[j]=count+cal;
        cal+=2;
    }
       } 
       else{
           lli cal=0;
           for(lli j=1;j<=5;j++){
               arr[j]=count+cal;
               cal+=2;
           }
       }
       for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl<<arr[c];
    return 0;
}