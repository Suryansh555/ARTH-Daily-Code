#include<bits/stdc++.h>
using namespace std ;

int FirstNonRepeatingCharacter(string val){
    vector<int> ASCII(26,0);
    for(int i = 0 ; i < val.length() ;i++){
        int index = val[i] - 'a' ;
        ASCII[index] ++;
    }
    for(int i = 0 ; i < val.length() ; i++){
        int index = val[i] - 'a' ;
        if(ASCII[index] == 1){
            return i ;
        }
    }
    return -1 ;
}

int main(){
    cout << FirstNonRepeatingCharacter("accabbdff");
}