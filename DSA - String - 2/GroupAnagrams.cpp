#include<bits/stdc++.h>
using namespace std ;


void GroupAnagrams(const vector<string> a ){
    unordered_map<string,vector<string>> mp ;
    for(int i = 0 ; i < a.size() ; i++){
        vector<int> arr(26,0);
        for(int j = 0 ; j < a[i].length() ; j++){
            arr[(int)a[i][j] - (int)'a']++ ;

        }
        string curr = "";
        for(int i = 0 ; i < 26 ; i++){
            while(arr[i] != 0){
                curr += (char)(i + 'a');
                arr[i]--;
            }
        }
        
        mp[curr].push_back(a[i]);
    }
    for(auto i = mp.begin() ; i!= mp.end() ; i++){
        for(int j = 0 ; j < i->second.size() ; j++){
            cout << " " << i->second[j] << " ";
        }
        cout << endl;
    }
}

int main(){    
    
    vector<string> a {"yo","act","flop","tac","foo","cat","oy","olfp"};
    GroupAnagrams(a);
}