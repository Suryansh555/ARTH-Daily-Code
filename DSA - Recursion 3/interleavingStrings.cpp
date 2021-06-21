#include <bits/stdc++.h>
using namespace std ;

bool InterweavingStrings(string A, string B , string C){
    if(C.length() == 0){
        return true;
    }

    if(B[0] == C[0]){
        return InterweavingStrings(A, B.substr(1,B.length()), C.substr(1,C.length()));
        
    }
    if(A[0] == C[0]){
        return InterweavingStrings(A.substr(1,A.length()), B , C.substr(1,C.length()));
        
    }
    else {
        return false;
    }
}

int main(){
    string A = "algoexpert";
    string B = "your-dream-job";
    string C = "your-algodream-expertjob";
    bool val = InterweavingStrings(A,B,C);
    cout << (bool) val ;
}