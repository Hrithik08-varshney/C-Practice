#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  vector<int>nums={3,3};
  vector<int>ans;
  int target=6;
   for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            break;
    }
   }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;

}