#include<iostream>
using namespace std ;
void sortthreedesc(int num1 , int num2 , int num3){

if(num1==num2 && num1==num3 ){
    cout << num1 << " " << num2 << " " << num3 ;
    return;
}


if(num1==num2){
    if(num1>num3){
        cout << num1 << " " << num2 << " " << num3 ;
    }
    else
        cout << num3 << " " << num1 << " " << num2 ;
}

if(num1==num3){
    if(num1>num2){
        cout << num1 << " " << num3 << " " << num2 ;
    }
    else
        cout << num2 << " " << num1 << " " << num1 ;
}

if(num2==num3){
    if(num2>num1){
        cout << num2 << " " << num3 << " " << num1 ;
    }
    else
        cout << num1 << " " << num2 << " " << num3 ;
}





if(num1>num2 && num1>num3){
    if(num2>num3){
        cout << num1 << " " << num2 << " " << num3 ;
    }
    if(num3>num2){
        cout << num1 << " " << num3 << " " << num2 ;
    }
}

if(num2>num1 && num2>num3){
    if(num1>num3){
        cout << num2 << " " << num1 << " " << num3 ;
    }
    if(num3>num1){
        cout << num2 << " " << num3 << " " << num1 ;
    }
}

if(num3>num1 && num3>num2){
    if(num1>num2){
        cout << num3 << " " << num1 << " " << num2 ;
    }
    if(num2>num1){
        cout << num3 << " " << num2 << " " << num1 ;
    }
}
}

void sortthreeasc(int num1 , int num2 , int num3){
if(num1==num2 && num1==num3 ){
    cout << num1 << " " << num2 << " " << num3 ;
    return;
}


if(num1==num2){
    if(num1<num3){
        cout << num1 << " " << num2 << " " << num3 ;
    }
    else
        cout << num3 << " " << num1 << " " << num2 ;
}

if(num1==num3){
    if(num1<num2){
        cout << num1 << " " << num3 << " " << num2 ;
    }
    else
        cout << num2 << " " << num1 << " " << num1 ;
}

if(num2==num3){
    if(num2<num1){
        cout << num2 << " " << num3 << " " << num1 ;
    }
    else
        cout << num1 << " " << num2 << " " << num3 ;
}





if(num1<num2 && num1<num3){
    if(num2<num3){
        cout << num1 << " " << num2 << " " << num3 ;
    }
    if(num3<num2){
        cout << num1 << " " << num3 << " " << num2 ;
    }
}

if(num2<num1 && num2<num3){
    if(num1<num3){
        cout << num2 << " " << num1 << " " << num3 ;
    }
    if(num3<num1){
        cout << num2 << " " << num3 << " " << num1 ;
    }
}

if(num3<num1 && num3<num2){
    if(num1<num2){
        cout << num3 << " " << num1 << " " << num2 ;
    }
    if(num2<num1){
        cout << num3 << " " << num2 << " " << num1 ;
    }
}
}

int main(){
    int num1,num2,num3;
    cout << "Enter Number 1 - ";
    cin >> num1;
    cout << "Enter Number 2 - ";
    cin >> num2;
    cout << "Enter Number 3 - ";
    cin >> num3;

    cout << "acsending Order - ";
    sortthreeasc(num1,num2,num3);
    cout << endl;
    cout << "decending Order - ";
    sortthreedesc(num1,num2,num3);
    
}