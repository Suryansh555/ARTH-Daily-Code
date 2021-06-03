#include<iostream>
using namespace std ;

int main(){
    double distance ;
    cout << "Enter Distance Between Two Cities (In KM) - ";
    cin >> distance;
    cout << fixed << "Distance In Metres- " << distance * 1000 << " Metres \n";
    cout << fixed << "Distance In Feet - " << distance * 3280.84 << " Feet \n" ;
    cout << fixed << "Distance In Inches - " << distance * 39370.1 << " Inches \n" ;
    cout << fixed << "Distance In Centimetres - " << distance * 100000 << " Centimetres \n" ;
}