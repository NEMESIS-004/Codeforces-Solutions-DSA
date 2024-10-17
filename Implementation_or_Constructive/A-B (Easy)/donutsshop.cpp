#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        int f=-1,s=-1;
        if(a<c) f=1;
        if(a*b>c) s=b;
        cout<<f<<" "<<s<<endl;


    }
    return 0;
}