#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;

        cout << "*******Kams Calulator*******" << endl;
        cin >> num1 >> operation >> num2;
//switch statement for options
        switch (operation) {
            case '+':
            cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
            break;

            case '-':
            cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
            break;

            case '*':
            cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
            break;

            case '/':
            cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
            break;

            case '%':
            if (num1 != int(num1) || num2 != int(num2)) {
                cout << "Invalid Numbers" << endl;
                break;
            }
            else {
                cout << int(num1) << '%' << int(num2) << '=' << int(num1) % int(num2) << endl;
                break;
            }
//If something other than a number is entered
            default:
            cout << "Enter Numbers Only!" << endl;
            break;
        }
    return 0;
}