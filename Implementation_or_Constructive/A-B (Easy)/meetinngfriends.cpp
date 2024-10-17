#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int dist=INT_MAX;
    for(int point = min(x1,min(x2,x3)); point<=max(x1,max(x2,x3));point++)
    dist = min(abs(x1-point)+abs(x2-point)+abs(x3-point),dist);
    cout<<dist;
    return 0;
}