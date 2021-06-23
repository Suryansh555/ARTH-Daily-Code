#include<bits/stdc++.h>
using namespace std ;

string Reverse(string A) {
    string s="",ans=""; 
    for(int i=0;A[i];i++){
        if(A[i]==' '){
            if(ans=="") ans=s+ans; 
            else ans= s+ " " + ans; 
            s = "";
        }
        else s+=A[i];
    }
    if(ans=="") ans=s+ans; 
    else ans= s+ " " + ans;
    
    bool flag = true; 
    int i=0;
    string res = "";
    while(ans[i]){
        if(ans[i]==' '){
            if(!flag) res += ans[i];
            flag = true;
        }
        else {
            flag = false; 
            res += ans[i];
        }
        i++;
    }
    return res;
}

int main(){
    string que = "Demo is the best!";
    cout << '"';
    cout << Reverse(que);
    cout << '"';
}