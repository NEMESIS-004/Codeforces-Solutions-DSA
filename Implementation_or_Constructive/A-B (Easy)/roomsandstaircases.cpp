#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
      int n,i,ans;
      string x;
      cin>>n>>x;
      ans=n;
      for(i=0;i<n;i++){
          if(x[i]=='1'){
            ans=max(ans,2*max(i+1,n-i));}
      }
      cout<<ans<<endl;
    }
  return 0;
}