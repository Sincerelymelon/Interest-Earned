
#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
 double principal;  //creating necessary variables to store values
 double ratepercent; 
 double ratedecimal;
 double T;
    cout << "Hello this program will be used to calculate the balance in your savings account after one year\n";
   
    cout << " To begin with, What is the starting balance of your account? \n"; //collecting necessary values from user
    cin >> principal;
    
    cout << "Next what is the annual interest rate on your account as a percent? \n";
    cin >> ratepercent;
   
    cout << "finally how often is the interest on your account compounded in a year? \n";
    cin >> T;
    ratedecimal = ratepercent / 100;                            //converting percentage to decimal amount to be used in equation
    double amount = principal * pow(1 + ratedecimal / T, T);    //Equation to calculate total amount
    double interest = amount - principal;
    cout << "Interest rate:" <<ratepercent <<"%\n";             //Outputting values for user to see
    cout << "Times compounded:" << T << "\n";
    cout << "Principal:" << principal << "\n";
    cout << "Interest Earned:" << interest << "$\n";
    cout << "total amount at the end of the year:" << amount << "$\n";

}

