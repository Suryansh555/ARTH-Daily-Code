#include<bits/stdc++.h>
using namespace std; 



bool isValid(vector<int> col){
    int row = col.size() -1 ;
    for(int i = 0 ; i < row ; i++){
        int diff = abs(col[i] - col[row]);
        if(diff == 0 || diff == row - i){
            return false;
        }
    }
    return true;
}


void solveNQueens(int n , int row , vector<int> col , vector<vector<int>> &ans ){
    
    if(row == n){
        ans.push_back(col);
    }
    else{
        for(int co = 0 ; co < n ; co++){
            col.push_back(co);
            if(isValid(col)){
                solveNQueens(n,row+1,col,ans);
            }
            col.pop_back();
        }
    }
}



vector<vector<int>> nQueens(int n ){
    vector<vector<int>> ans ;
    vector<int> col;
    solveNQueens(n , 0 , col  , ans);
    return ans;
}

int main(){
    vector<vector<int>> ans = nQueens(4);
    cout << ans.size() ;

}