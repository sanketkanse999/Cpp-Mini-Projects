#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    cout << "\n\n\t******** Welcome to Calculator *********" << endl;
    cout << "****** Enter 0 to exit the Program ******\n\n";
    cout << "Enter 1 for Addition" << endl;
    cout << "Enter 2 for Subtraction" << endl;
    cout << "Enter 3 for Multiplication" << endl;
    cout << "Enter 4 for Division" << endl;
    cout << "Enter 5 for Square" << endl;
    cout << "Enter 6 for Cube" << endl;
    cout << "Enter 7 for Square Root" << endl;
    cout << "Enter 8 for Power" << endl;
    cout << "Enter 9 for Factorial" << endl;

    int Choice;
    double a = 0, b = 0;
    double result = 0;

    while (true) {
        cout << "\n\nEnter your Choice: ";
        cin >> Choice;

        if ((Choice >= 1 && Choice <= 4) || Choice == 8) {
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        } else if (Choice == 0) {
            cout << "\n\n******** Thank you for using this program ********" << endl;
            exit(0); 
        } else {
            cout << "Enter the value of a: ";
            cin >> a;
        }

        switch (Choice) {
            case 1:
                result = a + b;
                cout << "Addition of " << a << " and " << b << " is = " << result << endl;
                break;
            case 2:
                result = a - b;
                cout << "Subtraction of " << a << " and " << b << " is = " << result << endl;
                break;
            case 3:
                result = a * b;
                cout << "Multiplication of " << a << " and " << b << " is = " << result << endl;
                break;
            case 4:
                if (b == 0) {
                    cout << "Division by zero is not allowed!!!" << endl;
                } else {
                    result = a / b;
                    cout << "Division of " << a << " and " << b << " is = " << result << endl;
                }
                break;
            case 5:
                result = a * a;
                cout << "Square of " << a << " is = " << result << endl;
                break;
            case 6:
                result = a * a * a;
                cout << "Cube of " << a << " is = " << result << endl;
                break;
            case 7:
                if (a >= 0) {
                    result = sqrt(a);
                    cout << "Square root of " << a << " is = " << result << endl;
                } else {
                    cout << "Square root of a negative number is not real" << endl;
                }
                break;
            case 8:
                result = pow(a, b);
                cout << "Result of " << a << "^" << b << " is = " << result << endl;
                break;
            case 9:
                if (a < 0) {
                    cout << "Factorial is only defined for non-negative numbers!!!" << endl;
                } else {
                    double fact = 1;
                    for (int i = 1; i <= a; i++) {
                        fact *= i;
                    }
                    result = fact;
                    cout << "Factorial of " << a << " is = " << result << endl;
                }
                break;
            default:
                cout << "Entered Choice is not correct!!! (Try Again)" << endl;
                break;
        }
    }

    return 0;
}
