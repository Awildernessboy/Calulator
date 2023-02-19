#include <iostream>

using namespace std;

int main ()
{
    // variables go here
    char op;
    double num1, num2 = 0.0;

    // inputs go here
    cout << "Enter the Operator (+, -, *, /) : ";
    cin >> op;
    cout << "Enter first number              : ";
    cin >> num1;
    cout << "Enter second number             : ";
    cin >> num2;

    // calculations go here
    //outputs go here
    switch (op)
    {
        case '+' :
            cout << num1 << " + " << num2 << " = " << (num1 + num2);
            break;

        case '-' :
            cout << num1 << " - " << num2 << " = " << (num1 - num2);
            break;

        case '*' :
            cout << num1 << " * " << num2 << " = " << (num1 * num2);
            break;

        case '/' :
            if (num2 != 0.0) 
                cout << num1 << " / " << num2 << " = " << (num1 / num2);

            else 
                cout << "Can not divide by 0";

            break;

        default : 
            cout << op << " is an invalid operator";

    }

    return 0;
}