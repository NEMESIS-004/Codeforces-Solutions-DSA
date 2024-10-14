#include<bits/stdc++.h>
using namespace std;

int main(){
    string sum;
    cin>>sum;
    int arr[4]={0};
    int lastdigit= 0;
    for(char i:sum){
        if(i!='+'){
            arr[i-'0']++;
            lastdigit = max(i-'0',lastdigit);
        }
    }

    for(int i=1;i<4;i++){
        while(arr[i]>0){
            cout<<i;
            if(i!=lastdigit || arr[i]!=1) cout<<'+';
            arr[i]--;
        }
    }
    return 0;
}