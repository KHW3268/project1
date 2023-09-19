#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    vector<int> random_numbers;
    srand(time(NULL)); 

    for (int i = 0; i < 6; ++i) {
        int random_number = rand() % 25 + 1; 
        random_numbers.push_back(random_number);
    }


    vector<int> player_numbers;
    cout << "1~25까지의 수를 입력하시오.( 띄어 쓰기로 구분)" << endl;

    for (int i = 0; i < 6; ++i) {
        int player_number;
        cin >> player_number;
        player_numbers.push_back(player_number);
    }


    set<int> check_set(player_numbers.begin(), player_numbers.end());
    set<int> check_set1(random_numbers.begin(), random_numbers.end());

    if (check_set.size() == player_numbers.size()|| check_set1.size() == random_numbers.size()) {
        cout << "컴퓨터 입력숫자" << endl;
        for (const auto& number : random_numbers) {
            cout << number << " ";
        }
        cout << endl;

        cout << "플레이어가 입력한숫자" << endl;
        for (const auto& number : player_numbers) {
            cout << number << " ";
        }
        cout << endl;

        int count = 0;
        for (const auto& number : random_numbers) {
            if (find(player_numbers.begin(), player_numbers.end(), number) != player_numbers.end()) {
                count++;
            }
        }

        if (count == 1) {
            cout << "6등" << endl;
        }
        else if (count == 2) {
            cout << "5등" << endl;
        }
        else if (count == 3) {
            cout << "4등" << endl;
        }
        else if (count == 4) {
            cout << "3등" << endl;
        }
        else if (count == 5) {
            cout << "2등" << endl;
        }
        else if (count == 6) {
            cout << "1등" << endl;
        }
        else
        {
            cout << "7등" << endl;
        }
    }
    else {
        cout << "중복된 숫자가 입력됐습니다." << endl;
    }

    return 0;

}

