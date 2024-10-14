#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>=0){
        int j;
        for(j=0;j<i;j++) cout<<"  ";

        j=n-j;

        int k;
        for(k=0;k<=j;k++) {
            cout<<k;
            if(i!=n)cout<<" ";
        }
        for(k=k-2;k>=0;k--){
            cout<<k;
            if(k!=0) cout<<" ";
        }
        i--;
        cout<<endl;
    }
    i+=2;
    while(i<=n){
        int j;
        for(j=0;j<i;j++) cout<<"  ";

        j=n-j;

        int k;
        for(k=0;k<=j;k++) {
            cout<<k;
            if(i!=n)cout<<" ";
        }
        for(k=k-2;k>=0;k--){
            cout<<k;
            if(k!=0) cout<<" ";
        }
        i++;
        cout<<endl;
    }
    return 0;
}