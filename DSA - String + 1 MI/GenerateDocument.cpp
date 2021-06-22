#include<bits/stdc++.h>
using namespace std;


bool GenerateDocument(string characters , string document){
    int ASCII[256] = {0};
    if(document.length()  > characters.length()){
        return false ; 
    }
    for(int  i = 0 ; i < characters.length() ;i++){
        ASCII[characters[i] - '0']++;
    }
    for(int i = 0 ; i < document.length() ; i++){
        ASCII[document[i] - '0']--;
    }
    for(int i = 0 ; i < 256 ; i++){
        if(ASCII[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string characters = "HelloWorld";
    string document = "WoeloHrlld";
    cout << GenerateDocument(characters,document);
}