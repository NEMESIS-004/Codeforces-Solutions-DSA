#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    auto check = [&](int x){
        int prev=0;
        for(int i=0;i<n;i++){
            if((prev<arr[i])&&(prev+m-arr[i]>x)) prev=arr[i];
            else if ((arr[i] < prev) && (prev > x+arr[i]))return 0;
        }
        return 1;
    };
    int low = 0;
    int high = m;
    while(low<=high){
        int mid = (low+high)/2;
        // cout<<mid<<endl;
        if(check(mid)) high = mid-1;
        else low = mid+1;
    }
    cout<<low;
    return 0;
}