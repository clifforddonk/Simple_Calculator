#include "Calculator.h"
Calculator::Calculator()
{
    display();
}
void Calculator::display()
{
     string Choice;
    do
    {
        int a, b;
        char choice;
        cout<<"================="<<endl;
        cout<<"Simple Calculator"<<endl;
        cout<<"================="<<endl;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "What Operation Do You Want To Perform?" << endl;
        cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division" << endl;
        cin >> choice;

        switch (choice)
        {
        case '1':
            addition(a, b);
            break;
        case '2':
            subtraction(a, b);
            break;
        case '3':
            multiplication(a, b);
            break;
        case '4':
            division(a, b);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << "Do You Want To Continue?(Y/N): ";
        cin >> Choice;
    } while (Choice == "Y" || Choice == "y");
}
float Calculator::addition(float a, float b)
{
    cout << a << " + " << b << " = " << a + b << endl;
    return a + b;
}

float Calculator::subtraction(float a, float b)
{
    cout << a << " - " << b << " = " << a - b << endl;
    return a - b;
}

float Calculator::multiplication(float a,float  b)
{
    cout << a << " * " << b << " = " << a * b << endl;
    return a * b;
}

float Calculator::division(float a, float b)
{
    if (b != 0)
    {
        cout << a << " / " << b << " = " << a / b << endl;
        return a / b;
    }
    else
    {
        cout << "Error, Division By Zero" << endl;
        return 0;
    }
}



