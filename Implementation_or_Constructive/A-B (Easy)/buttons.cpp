#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int j=1,ans=n;
    for(int i=n-1;i>0;i--){
        ans+=(i*j);

        j++;
    }
    cout<<ans;
    return 0;   
}