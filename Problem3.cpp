#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char Currency = 0;
    double sellP, buyP, amount;
    bool choice;

    cout << "Enter one of the following currencies.\n" << "* Euro - $ Dollar - + British Pound - Y yen - R Riyal\n";
    cin >> Currency;

    cout << "Enter Selling price and Buying price\n";
    cin >> sellP >> buyP;

    cout << "Would you like to buy or sell? 0 for buy / 1 for sell\n";
    cin >> choice;

    cout << "Please enter the amount\n";
    cin >> amount;

    if(choice)
    {
        cout << amount * sellP;
    }
    else
    {
        cout << amount * buyP;
    }
}