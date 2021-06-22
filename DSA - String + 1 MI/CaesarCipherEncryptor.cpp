#include<bits/stdc++.h>
using namespace std;


string CaesorCipher(string a ,  int rotate){
    string ans = "";
    for(int i = 0 ; i < a.length() ; i++){
        char val = (a[i] + rotate) % '{' ;
        if(val < 'a'){
            ans += (char)val + 'a'; 
        }
        else{
            ans+= (char)val ;
        }
        
    
    }
    return ans ;


}

int main(){
    cout << CaesorCipher("xyz" , 2);


}