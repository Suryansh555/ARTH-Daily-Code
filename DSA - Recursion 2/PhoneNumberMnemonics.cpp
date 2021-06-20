#include<bits/stdc++.h>
using namespace std;


string match(char val){
    string val1 ;
    switch(val){
        case '1' :
            val1 = "1";
            break;
        case '2' :
            val1 = "abc";
            break;
        case '3' :
            val1 = "def";
            break;
        case '4' :
            val1 = "ghi";
            break;
        case '5' :
            val1 = "jkl";
            break;
        case '6' :
            val1 = "mno";
            break; 
        case '7' :
            val1 = "pqrs";
            break;
        case '8' :
            val1 = "tuv";
            break;
        case '9' : 
            val1 = "wxyz";
            break;
        case '0' :
            val1 = "0";   
            break;
    }
    return val1; 
}

void matchphone(vector<string> &ans , string input , int size , string curr = "" ){
    if(curr.length() == size){
        ans.push_back(curr);
        return;
    }
    string c = match(input[0]) ;
    string remain = input.substr(1,input.length());
    for(int i = 0 ; i < c.length() ; i++){
            matchphone(ans,remain,size,curr+ c[i]);
    }
    return ;
}


int main(){
    vector<string> ans ;
    string input = "1905";
    int size = input.length();
    matchphone(ans,input,size);
    cout << "[" << endl;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << '"' << ans[i] << '"' << endl ;
    }
    cout << "]";


}