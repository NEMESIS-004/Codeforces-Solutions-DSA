#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n]={0};
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int portal=1;
    for(int i=0;i<n-1;){
        portal=portal+arr[i];
        i=portal-1;
        if(portal>=t) break;
    }
    if(portal>t) cout<<"NO";
    else cout<<"YES";
    return 0;
}