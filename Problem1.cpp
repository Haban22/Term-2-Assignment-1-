#include <iostream>
#include <cstdlib>


using namespace std;



int main()
{
    bool enable = true;
    char input, OP;
    int N1 , N2;

    // Main loop
    while(enable)
    {
        cout << "Do you want to use the Calculator? (y / n)\n";
        cin >> input;
        
        if(input == 'n')
        {
            enable = false;
            break;
        }
        else if(input != 'y')
        {
            cout << "Wrong input try again\n";
            continue;
        }

        // If wrong input, try again and For loop because it is safer (Cannot be infinite)
        for(int i = 0; i <= 100; i++)
        {
            cout << "Enter operator either + or - or * or /\n";
            cin >> OP;

            if(OP == '+' || OP == '-' || OP == '*' || OP == '/')
            {
                break;
            }
            else
            {
                cout << "Wrong input try again\n";
            }
            
        }

        cout << "Enter 2 numbers for the operation ( N1 "<< OP << " N2 )\n";
        cin >> N1 >> N2;

        switch(OP)
        {
            case '+':
            {
                cout << "Addition Result: " << N1 + N2 << endl;
                break;
            }
            case '-':
            {
                cout << "Subtraction Result: " << N1 - N2 << endl;
                break;
            }  
            case '*':
            {
                cout << "Multiplication Result: " << N1 * N2 << endl;
                break;
            }
            case '/':
            {
                cout << "Division Result: " << N1 / N2 << endl;
                break;
            }
            default:
            {
                cout << "Something went wrong" << endl;
                break;
            }
        }


    }
}