#include <bits/stdc++.h>
using namespace std;
 
int main(void) 
{
  int t ;
  cin>>t ;
  while(t--){
    int n ;
    cin>>n ;
    string str ;
    cin>>str ;
    int i ;
    for(i=0;i<n;i++){
      if(abs(str[i]-str[n-i-1])!=2 && str[i]-str[n-i-1]!=0){
        cout<<"NO"<<endl ;
        break ;
      }
    }
    if(i==n){
      cout<<"YES"<<endl ;
    }
  }
  return 0 ;
}