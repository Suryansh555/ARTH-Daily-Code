#include<iostream>
using namespace std;

int NthFibonacci(int n)
{
if (n <= 1) 
return n; 
return NthFibonacci(n - 1) + NthFibonacci(n - 2); 
}

int main(){
    int n ;
    cout << "Enter Value of N - ";
    cin >> n ;
    cout << "Nth Fibonacci is - " << NthFibonacci(n);
    return 0 ;
    
}