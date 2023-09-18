#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int number = 0;
    bool turn = true; 

    while (number < 31) {
        cout << "현재 숫자: " << number << endl;
        if (turn) {
            cout << "플레이어 차례입니다." << endl;

            int input;
            cin >> input;
            number += input;
        }
        else {
            cout << "컴퓨터 차례입니다." << endl;

            int input = rand() % 3 + 1; 
            cout << "컴퓨터가 선택한 숫자: " << input << endl;

            number += input;
        }

        turn = !turn; 
    }

    if (turn) {
        cout << "플레이어가 이겼습니다!" << endl;
    }
    else {
        cout << "컴퓨터가 이겼습니다!" << endl;
    }

    return 0;
}

