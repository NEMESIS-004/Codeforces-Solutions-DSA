#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int height=0;
    long long int cubes=0;
    while(n>0){
        height++;
        cubes+=height;
        n-=cubes;
    }
    if(n<0) height--;
    cout<<height;
    return 0;
}