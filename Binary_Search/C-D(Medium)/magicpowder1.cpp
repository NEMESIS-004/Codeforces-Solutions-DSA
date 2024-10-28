#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int requirements[n] , stored[n];
    for(int i=0;i<n;i++) cin>>requirements[i];
    for(int i=0;i<n;i++) cin>>stored[i];
    int low =0, high = 5000;

    while(low<high-1){
        int mid = (low+high)/2;
        // cout<<mid<<endl;
        int total = 0;
        for(int i=0;i<n;i++){
            total += max((mid*requirements[i] - stored[i]),0);
        }
        if(total-k <= 0) low = mid;
        else high = mid;
    }
    cout<<low;
    return 0;
}