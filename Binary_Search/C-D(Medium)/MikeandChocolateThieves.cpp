#include<bits/stdc++.h>
using namespace std;

long long check(long long x){
    long long ans = 0;
    for(long long i=2;i*i*i<=x;i++){
        ans+= x/(i*i*i);
    }
    return ans;
}

int main(){
    long long m;
    cin>>m;
    long long low=-1, high = 1e18;
    long long n=-1;
    while(low<=high){
        long long mid = (low+high)/2;
        // cout<<mid<<endl;
        long long ans = check(mid);
        if(ans==m) n=mid;
        if(ans<m) low=mid+1;
        else high = mid-1;
    }
    cout<<n;
    return 0;
}