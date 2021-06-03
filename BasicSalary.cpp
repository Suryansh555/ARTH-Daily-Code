/* 
Ramesh's basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary.
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    double basic_salary ; 
    cout << "Please Enter Your Base Salary - " ;
    cin >> basic_salary;
    double gross_salary = basic_salary + (0.4 * basic_salary) + (0.2 * basic_salary);
    cout << "Your Gross Salary is - " << gross_salary; 
}