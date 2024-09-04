#include <iostream>

using namespace std;

int main(void){

    int num1 = 0;
    int num2 = 0;
    char choice;
    string history;

    while (true){

        cout << "Enter the calculation you want to perform: (+-*/)";
        cin >> num1;
        cin >> choice;
        cin >> num2;
/*
        if (choice == '+'){
            cout << num1 << '+' << num2 << '=' << num1+num2 << endl;
        }
        if (choice == '-'){
            cout << num1 << '-' << num2 << '=' << num1-num2 << endl;
        }
        if (choice == '*'){
            cout << num1 << '*' << num2 << '=' << num1*num2 << endl;
        }
        if (choice == '/'){
            cout << num1 << '/' << num2 << '=' << num1/num2 << endl;
        }
*/
    
        switch(choice){
        case '+':
            cout << num1 << '+' << num2 << '=' << num1+num2 << endl;
            history = history + to_string(num1) + choice + to_string(num2) + "=" + to_string(num1 + num2) + '\n';
            break;
        case '-':
            cout << num1 << '-' << num2 << '=' << num1-num2 << endl;
            history = history + to_string(num1) + choice + to_string(num2) + "=" + to_string(num1 - num2) + '\n';
            break;
        case '*':
            cout << num1 << '*' << num2 << '=' << num1*num2 << endl;
            history = history + to_string(num1) + choice + to_string(num2) + "=" + to_string(num1 * num2) + '\n';
            break;
        case '/':
            cout << num1 << '/' << num2 << '=' << num1/num2 << endl;
            history = history + to_string(num1) + choice + to_string(num2) + "=" + to_string(num1 / num2) + '\n';
            break;
        case 'h': case 'H':
            cout << history;
            break;
        default:
            cout << "\nplease enter eather: +-*/\n";
        }
    }
    return 0;
}