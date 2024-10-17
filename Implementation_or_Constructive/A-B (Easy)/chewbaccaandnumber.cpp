#include<bits/stdc++.h>
using namespace std;

int main(){
    string nums;
    cin>>nums;
    long long int ans = 0;
    for(int i=0;i<nums.size();i++){
        if(i==0 && nums[i]=='9') ans = ans*10 + (nums[i]-'0');
        else if(nums[i]>'4')ans = ans*10 + 9 - (nums[i]-'0');
        else ans = ans*10 + (nums[i]-'0');
    }
    
    if(ans==0) cout<<9;
    else cout<<ans;
    return 0;
}