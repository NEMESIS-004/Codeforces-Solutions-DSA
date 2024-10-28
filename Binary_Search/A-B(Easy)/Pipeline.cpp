#include<bits/stdc++.h>
using namespace std;
long long n,k;
bool check(long long x){
    return ((k-(x+1)+k)*x)/2 +1 >= n;
}

int main(){
    
    cin>>n>>k;
    if((k*(k-1)/2)+1<n) {
        cout<<-1;
        return 0;
    }
    int low = -1;
    int high = k;
    while(low<high-1){

        int mid = (low+high)/2;
        // cout<<mid<<endl;
        if(check(mid)) high = mid;
        else low = mid;
    }
    cout<<high;
    return 0;
}