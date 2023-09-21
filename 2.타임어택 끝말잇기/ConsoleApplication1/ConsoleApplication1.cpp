#include <iostream>
#include <ctime>
#include <vector>

using namespace std;


int main() {
    time_t startTime = time(NULL);
    vector <string> name_lst;
    while (1) {
        if (name_lst.empty()) {
            cout << "시작 단어를 입력해주세요. : ";
            string startname;
            cin >> startname;
            name_lst.push_back(startname);
        }

        int time_limit = 0;
        cout << "다음 단어를 입력해주세요. : ";
        string nextname;
        cin >> nextname;

        time_t endTime = time(NULL);

        cout << "현재 시간 : " << (double)(endTime - startTime) << endl;
        if ((double)(endTime - startTime) > 30) {
            time_limit = 1;
            cout << "타임오버 : 입력한 단어의 총개수는 : " << name_lst.size() << "개입니다." << endl;
            break;
        }

        while (1) {
            int dup_test = 0;
            for (int i = 0; i < name_lst.size(); i++) {
                if (name_lst[i] == nextname) {

                    dup_test = 1;
                    break;
                }
            }
            if (dup_test == 1) {
                cout << "중복된 단어가 있습니다. 다시 입력해주세요. " << endl;
                break;
            }

            if (nextname[0] == name_lst[name_lst.size() - 1][name_lst[name_lst.size() - 1].size() - 1]) {
                name_lst.push_back(nextname);
                break;
            }
            else {
                cout << "일치하지 않습니다. 다시 입력해주세요." << endl;
                break;
            }
        }

        cout << name_lst[0];
        for (int i = 1; i < name_lst.size(); i++) {
            cout << "->" << name_lst[i];
        }
        cout << endl;
    }
}