#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> operatons(n);
    for(int i=0;i<n;i++){
        cin>>operatons[i];
    }
    int x=0;
    for(auto i:operatons){
        if(i[1]=='+')x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}