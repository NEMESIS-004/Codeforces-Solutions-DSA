#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    string decrypted="";
    int j=1;
    while(i<n){

        decrypted+=s[i];
        i+=j;
        j++;
    }
    cout<<decrypted;
    return 0;
}