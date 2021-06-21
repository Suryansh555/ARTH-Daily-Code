#include<bits/stdc++.h> 
using namespace std;
 
void GenerateDivTags(vector<string> &ans , int n , string curr = "",int start = 0 , int end = 0 ){
    if(end == n){
        cout  << curr << endl ;
        ans.push_back(curr);
    }
    if(start < n){
        
        GenerateDivTags(ans,n,curr + "<div>",start+1,end);

    }
    if(end < start){
        
        GenerateDivTags(ans,n,curr +"</div>",start,end+1);
    }


    
    
}
// Driver code
int main()
{
    int n = 3;
    vector<string> ans;
    GenerateDivTags(ans,n);
    return 0;
}
 