#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int row,i,j,value;
  cin>>row;
  for(i=0;i<row;i++){
    value=i+1;
    for (j=0;j<(2*row)-1;j++){
      if(j>=(row-i)-1 && j<=(row+i)-1){
        cout<<value;
        if(j>=row-1){
          value++;
        }
        else{
          value--;
        }
      }
      else cout<<" ";
    }
    cout<<"\n";
  }
  return 0;
}