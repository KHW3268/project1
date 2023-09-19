#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //컴퓨터 입력 숫자 결정
    vector<int> computer_numbers;
    srand(time(NULL));

    for (int i = 0; i < 3; ++i) {
        int computer_number = rand() % 9 + 1;
        computer_numbers.push_back(computer_number);
    }

    //게임시작
    int strike = 0;
    while (strike != 3) {
        strike = 0;
        int ball = 0;

        // 플레이어 입력숫자
        vector<int> player_numbers;
        cout << "1~9까지의 수를 입력하시오.( 띄어 쓰기로 구분)" << endl;
        int player_number;
        for (int i = 0; i < 3; ++i) {
            cin >> player_number;
            while(player_number < 1 || player_number > 9){
                cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
                cin >> player_number;
            }
            player_numbers.push_back(player_number);
        }

        //결과 처리
        for (int i = 0; i < 3; ++i) {
            if (computer_numbers[i] == player_numbers[i]) {
                ++strike;
            }
            else if (find(computer_numbers.begin(), computer_numbers.end(), player_numbers[i]) != computer_numbers.end()) {
                ++ball;
            }
        }

        cout << "strike: " << strike << ", ball: " << ball << endl;
    }

    return 0;
}


