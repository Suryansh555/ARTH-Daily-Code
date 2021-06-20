#include <bits/stdc++.h>
using namespace std;
void printAllSubsets(string str, int n, vector<string>& ans,int index = -1, string subset = "") {
   if (index == n)
      return;
    ans.push_back(subset);
   for (int i = index + 1; i < n; i++) {
       if(subset.length() != 0){
           subset+= ", ";
           subset+= str[i];
        }
        else{
            subset+= str[i];
        }
      
      printAllSubsets(str, n,ans ,i, subset);
      subset = subset.erase(subset.size() - 1);
   }
   return;
}

int main() {
    vector<int> input ;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    string str = "";
    for(int i = 0 ; i < input.size() ; i++){
        str += to_string(input[i]);
    }
    vector<string> ans;
   printAllSubsets(str, str.size(),ans);
   cout << "[";
   for(int i = 0 ; i < ans.size(); i++){
       cout << "[" << ans[i] << "]" ;
       if(i == ans.size() - 1){
           break;
       }
       cout << ", ";
   }
   cout << "]";
   return 0;
}