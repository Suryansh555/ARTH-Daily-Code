#include<bits/stdc++.h>
using namespace std ;

bool MeasuringCups(vector<pair<int,int>> measuring , int low , int high , int currlow = 0 , int currhigh = 0 ){
    if(low < currlow < high && low < currhigh < high){
        return true ; 
    }
    else if(currlow > high || currhigh > high){
        return false;
    }
    for(int i = 0 ; i < measuring.size() ; i++){
        
    }
}

int main(){
    vector<pair<int,int>> measure;
    measure.push_back(make_pair(200,210));
    measure.push_back(make_pair(450,465));
    measure.push_back(make_pair(800,850));
}