#include<bits/stdc++.h>
using namespace std ;

#define ll long long



void solve(string& s, set<string>& v, string ans, int i, int q, ll k){
    if(i==s.length() && q==4){
        ans.pop_back();
        v.insert(ans);
        return;
    }else if(i==s.length() || q==4){
        return;
    }
    k=10*k+(s[i]-'0');
    
    if(k==0){
        solve(s, v, ans+s[i]+".", i+1, q+1, 0);
    }else if(k>0 && k<256){
        solve(s, v, ans+s[i], i+1, q, k);
        
        solve(s, v, ans+s[i]+".", i+1, q+1, 0);
        
    }else if(k>256){
        solve(s, v, ans+".", i, q+1, 0);
    }
    
}

vector<string> IpAddresses(string s) {
    set<string> v;
    vector<string> arr;
    int i=0, q=0;
    string ans="";
    ll k=0;
    solve(s, v, ans, i, q, k);
    
    for(auto it: v){
        arr.push_back(it);
    }
    
    return arr;
}

int main(){
   vector<string> ans =  IpAddresses("1921680");
   for(int i = 0 ; i < ans.size() ; i++){
       cout << ans[i] << endl;
   }
}