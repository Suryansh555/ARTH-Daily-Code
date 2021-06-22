#include<bits/stdc++.h>
using namespace std; 

bool CheckPalindrome(string a){
    if(a.length() <= 1){
        return true ;
    }      
    int p1 = 0 ;
    int p2 = a.length()-1;
    while(p1 <= p2){
        if(a[p1] == a[p2]){
            p1++;
            p2--;
        }
        else{
            return false;
        }
    }
    return true ;
}
int main(){
    cout << CheckPalindrome("aba");
}