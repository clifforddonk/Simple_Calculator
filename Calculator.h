#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
using namespace std;
class Calculator
{
public:
    Calculator();
    void display();
private:
    float addition(float a, float b);
    float subtraction(float a, float b);
    float multiplication(float a, float b);
    float division(float a, float b);
};
#endif // CALCULATOR_H
