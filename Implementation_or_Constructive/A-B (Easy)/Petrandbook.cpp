#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int read[7];
    for(int i=0;i<7;i++){
        cin>>read[i];
    }
    int i=0;
    while(n>0){

        n-=read[i];
        i++;
        i=i%7;
    }
    cout<<(i==0?7:i)<<endl;
    return 0;
}