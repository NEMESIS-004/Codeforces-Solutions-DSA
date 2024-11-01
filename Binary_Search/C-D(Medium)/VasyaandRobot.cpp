#include<bits/stdc++.h>
using namespace std;

bool check(int len,int n,int x,int y, int (&arrx)[], int (&arry)[]){
    for(int i=1,j=len;j<=n;i++,j++){
        int nx = arrx[n]-(arrx[j]-arrx[i-1]);
        int ny = arry[n]-(arry[j]-arry[i-1]);
        if(len >= abs(x-nx)+abs(y-ny) && (len-abs(x-nx)-abs(y-ny))%2==0) return true;
    }
    return false;
}

int main(){
    int n,x,y;
    string s;
    cin>>n>>s>>x>>y;
    if(abs(x)+abs(y)>n){
        cout<<-1;
        return 0;
    }
    int arrx[n+1]={0}, arry[n+1]={0};
    for(int i=1;i<=n;i++){
        arrx[i] = arrx[i-1];
        arry[i] = arry[i-1];
        if(s[i-1]=='L') arrx[i]--;
        if(s[i-1]=='R') arrx[i]++;
        if(s[i-1]=='U') arry[i]++;
        if(s[i-1]=='D') arry[i]--;
    }
    int low=0, high = n;
    while(low<=high){
        int mid=(low+high)/2;
 
        if(check(mid,n,x,y,arrx,arry)) high = mid-1;
        else low=mid+1;
    }
    if(low>n) cout<<-1;
    else cout<<high+1;
    return 0;
}