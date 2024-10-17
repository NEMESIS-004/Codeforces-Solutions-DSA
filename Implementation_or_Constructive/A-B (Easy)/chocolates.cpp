#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=arr[n-1],prev=arr[n-1];
    for(int i=n-2;i>-1;i--){
        if(prev>0) prev--;
        sum+=min(prev,arr[i]);
        prev = min(prev,arr[i]);

    }

    cout<<sum;
    return 0;
}