#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> rain(n);
    
    for(int i=0; i<n;i++) cin>>rain[i];
    int m=0;
    for(int i=0; i<n;i++)
    {
        if(rain[i]<rain[m]) m=i;
        if(i-m>=y) break;
    }
    cout<<m+1;
   
    return 0;
    
   
}