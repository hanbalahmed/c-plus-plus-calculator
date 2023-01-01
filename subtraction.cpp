#include <iostream>

using namespace std;

int main()
{
    // cout << "Hello world!" << endl;
    int num1, num2, sum; // creates variables (int is used for  WHOLE numbers)
    cout << "Enter 2 numbers" << endl; // sends a message prompting the user to select two numbers
    cin >> num1 >> num2; // takes the two numbers
    sum = num1 - num2; // variable sum will equal number 1 subtracted by number 2
    cout << sum << endl; // prints the answer
    system("pause"); // press key to close program
    return 0;
}
