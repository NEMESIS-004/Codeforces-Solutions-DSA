#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string num;
        cin>>num;
        int pressed = ((num[0]-'0')-1)*10;
        for(int i=1;i<=num.size();i++) pressed+=i;
        cout<<pressed<<endl;
    }
    return 0;
}