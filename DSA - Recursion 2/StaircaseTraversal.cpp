#include<bits/stdc++.h>
using namespace std;

int staircase(int n , int step){
    if(n<0){           
        return 0;
    }

    if(n==0){          
        return 1;
    }

    int count = 0;
    for(int i = 1 ; i <= step ; i++){
        count+= staircase(n-i , step);
    }


    return count;
}

int main(){
    cout << staircase(3,2);

}