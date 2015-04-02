// Code for Project 1c --> introducing at least two compile/runtime errors
// Report poll results

#include <iostream>
using namespace std;

int main    //forgot parentheses to indicate function
{
    int numberSurveyed;
    int preferChocolate;
    int preferVanilla;
    
    cout << "How many ice cream lovers were surveyed? "     // forgot a semi-colon
    cin >> numberSurveyed;
    cout << "How many of them prefer chocolate to vanilla? ";
    cin >> preferChocolate;
    cout << "How many of them prefer vanilla to chocolate? ";
    cin >> preferVanilla;
    
    double pctChocolate = 100.0 * preferChocolate / numberSurveyed;
    double pctVanilla = 100.0 * preferVanilla / numberSurveyed;
    
    cout.setf(ios::fixed);
    cout.precision(1);
    
    cout << endl;
    cout << pctChocolate << "% prefer chocolate." << endl;
    cout << pctVanilla << "% prefer vanilla." << endl;
    
    if (preferChocolate > preferVanilla)
        cout << "Chocolate is more popular than vanilla." << endl;
    else
        cout << "Vanilla is more popular than chocolate." << endl;
}