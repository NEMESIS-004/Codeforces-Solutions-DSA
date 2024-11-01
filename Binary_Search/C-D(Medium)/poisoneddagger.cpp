#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,h;
        cin>>n>>h;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        
        long long low=1;
        long long high = h;
        while(low<=high){
            long long mid = (low+high)/2;
            // cout<<mid<<endl;
            long long sum = mid;
            for(int i=0;i<n-1;i++) sum+=min(mid,arr[i+1]-arr[i]);
            if(sum<h) low = mid+1;
            else high = mid-1;
        }
        cout<<high+1<<endl;
        
    }
    return 0;
}