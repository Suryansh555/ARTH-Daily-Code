#include<bits/stdc++.h>
using namespace std ;

void MinimumCharacter(vector<string>& ques){
    unordered_map<char,int> st ;
    for(int  i = 0 ; i < ques.size() ; i++){
        int chaar[26] = {0};
        for(int j = 0 ; j < ques[i].length() ; j++){
            if(chaar[ques[i][j] - 'a'] == 0 ){
                chaar[ques[i][j] - 'a'] = 1 ; 
                if(st.find(ques[i][j]) == st.end()){
                    st.insert({ques[i][j] , 1 });
                }
            }
            else{
                chaar[ques[i][j] - 'a']++;
                if(st[ques[i][j]] != chaar[ques[i][j] - 'a'] ){
                    st[ques[i][j]] = chaar[ques[i][j] - 'a'] ;
                }
            }
        }
    }
    cout << "[" ;
    for(auto it = st.begin() ; it != st.end() ; it++){
        while(it->second != 0){
            cout << '"' << it->first << '"' ;
            it->second--;
        auto val = it ;
        if(++val != st.end() || it -> second == 0 ){
                cout << ", ";
        }
        }
         

    }
    cout << "]" ; 
}

int main(){
    vector<string> ques {"this","that","did","deed","them!","a"};
    MinimumCharacter(ques);

}