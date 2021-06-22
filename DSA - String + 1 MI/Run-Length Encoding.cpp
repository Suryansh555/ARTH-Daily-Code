#include<bits/stdc++.h>
using namespace std;

string Encode(string val ){
    string ans = "";
    char curr ;
    int occur = 0 ;
    for(int i = 0 ; i < val.length() ;i++ ){
        if(occur == 0){
            curr = val[i];
            occur = 1 ;
        }
        else{
            if(curr != val[i]){
                ans += (string)(to_string(occur) + curr);
                curr = val[i];
                occur = 1 ;
            }
            else{
                if(occur == 9){
                    ans += (string)(to_string(occur) + curr);
                    occur = 1 ;
                }
                else{
                    occur++;
                }
            }
        }
    }
    ans += (string)(to_string(occur) + curr);
    return ans ;
}
int main(){
    cout << Encode("AAAAAAAAABBBCCCCCCDDDD");

}