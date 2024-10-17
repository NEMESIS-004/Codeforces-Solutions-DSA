#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi=INT_MIN,mini = INT_MAX;
    int posmax,posmin;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>maxi){
            posmax=i;
            maxi=a;
        }
        if(a<=mini){
            mini=a;
            posmin=i;
        }
    }
    int ans = (n-1-posmin)+posmax;
    if(posmax>posmin) ans--;
    cout<<ans;
    return 0;
}