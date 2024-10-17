#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long int cost=0;
    int c=1;
    while(w--){
        cost+= c*k;
        c++;
    }
    int borrow = cost-n;
    if(borrow<0) borrow = 0;
    cout<<borrow;
    return 0;
}