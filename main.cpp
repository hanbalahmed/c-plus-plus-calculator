#include <iostream>

using namespace std;

int main()
{
    int num1,num2,sum; // makes the variables

    // Addition
    cout << "Enter two numbers" << endl; // takes first number and secon number
    cin >> num1 >> num2; // takes an input. equals to input(); in python
    sum = num1 + num2; // the sum will equal the first number add second number
    cout << num1 << "+" << num2 << "=" << sum << endl; // does number1 + number2 = sum

    system("pause"); // enables "press key to close"
    return 0;
}
