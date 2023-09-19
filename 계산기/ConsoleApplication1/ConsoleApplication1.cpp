#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static double divide(int a, int b) {
        if (b == 0) {
            cout << "나눌수가 없습니다." << endl;
            return 0;
        }
        return static_cast<double>(a) / static_cast<double>(b);
    }
};

class AdvancedCalculator : public Calculator {
public:
    virtual void printinfo() {
        cout << "계산기 입니다." << endl;
    }
};

int main() {
    AdvancedCalculator* calc = new AdvancedCalculator();
    double result = 0.0;
    char op;
    string choice;

    while (true) {

        calc->printinfo();

        int a, b;

        cout << "숫자를 넣어주세요: ";
        cin >> a;

        cout << "연산자를 입력해주세요 (+, -, *, /): ";
        cin >> op;

        cout << "숫자를 입력해주세요:";
        cin >> b;

        switch (op) {
        case '+':
            result = calc->add(a, b);
            break;
        case '-':
            result = calc->subtract(a, b);
            break;
        case '*':
            result = calc->multiply(a, b);
            break;
        case '/':
            result = calc->divide(a, b);
            break;
        default:
            cout << "연산이 불가능합니다." << endl;
            continue;
        }

        while (true) {
            cout << "------------------------------------------" << endl;
            cout << "결과: " << result << endl;
            cout << "------------------------------------------" << endl;

            cout << "연산을 계속 진행하시겠습니까? (Y: 계속 , AC: 리셋, EXIT: 나가기): ";
            cin >> choice;

            if (choice == "Y" || choice == "y") {
                a = result;

                cout << "연산자를 입력해주세요: (+, -, *, /): ";
                cin >> op;

                cout << "숫자를 입력해주세요: ";
                cin >> b;

                switch (op) {
                case '+':
                    result = calc->add(a, b);
                    break;
                case '-':
                    result = calc->subtract(a, b);
                    break;
                case '*':
                    result = calc->multiply(a, b);
                    break;
                case '/':
                    result = calc->divide(a, b);
                    break;
                default:
                    cout << "연산이 불가능합니다." << endl;
                    continue;
                }
            }

            else if (choice == "AC" || choice == "ac") {
                cout << "초기화 되었습니다." << endl;
                break;
            }
            else if (choice == "EXIT" || choice == "exit") {

                delete calc;
                exit(0); 
            }
            else {
                cout << "연산이 불가능합니다." << endl;
                continue; // Invalid input
            }

        }

    }

    delete calc;

    return 0;
}

