#include<bits/stdc++.h>
using namespace std; 


vector<vector<int>> multiply(vector<vector<int>> A, vector<vector<int>> B) {
      int r1 = A.size();
      int r2 = B.size();
      int c1 = A[0].size();
      int c2 = B[0].size();
      vector <vector<int>> ret(r1, vector <int> (c2));
      vector <pair<int, int>> sparseA[r1];
      for(int i = 0; i < r1; i++){
         for(int j = 0; j < c1; j++){
            if(A[i][j] != 0)sparseA[i].push_back({j, A[i][j]});
         }
      }
      for(int i = 0; i < r1; i++){
         for(int j = 0; j < sparseA[i].size(); j++){
            for(int k = 0; k < c2; k++){
               int x = sparseA[i][j].first;
               if(B[x][k] != 0){
                  ret[i][k] += sparseA[i][j].second * B[x][k];
               }
            }
         }
      }
      return ret;
   }


int main(){
    vector<vector<int>> ans ;
    vector<vector<int>> arr1  = {{1,0,0},{-1,0,3}};
    vector<vector<int>> arr2 = {{7,0,0},{0,0,0},{0,0,1}} ;
    ans = multiply(arr1,arr2);
}