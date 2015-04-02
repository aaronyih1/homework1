// Code for Project 1b--> I have introduced two logic errors into this document
// Report poll results

#include <iostream>
using namespace std;

int main()
{
    int numberSurveyed;
    int preferChocolate;
    int preferVanilla;
    
    cout << "How many ice cream lovers were surveyed? ";
    cin >> numberSurveyed;
    cout << "How many of them prefer chocolate to vanilla? ";
    cin >> preferChocolate;
    cout << "How many of them prefer vanilla to chocolate? ";
    cin >> preferVanilla;
    
    double pctChocolate = preferChocolate / numberSurveyed; // forgot to multiply the ratio by 100 to convert to percentages
    double pctVanilla = preferVanilla / numberSurveyed;
    
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