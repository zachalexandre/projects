#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Welcome to Calculator!" << endl;

    cout << "Please Enter Operator: +, -, *, / : ";
    cin >> op;

    cout << "Enter any two numeric value: ";
    cin >> num1 >> num2;

    switch(op)
    {
       case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

       case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;

       case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;

       case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;

    default:
    cout << "Error! Please make sure the operator is correct D: ";
    break;

    }

    return 0;
}
