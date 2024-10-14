#include<bits/stdc++.h>
using namespace std;

int main(){
    int pos_row, pos_col;
    vector<vector<int>> matrix(5,vector<int>(5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                pos_row = i;
                pos_col = j;
            }
        }
    }
    int ans = abs(pos_col-2) + abs(pos_row-2);
    cout<<ans;
    return 0;
}