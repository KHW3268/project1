#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "N X N 마방진의 크기를 입력하시오: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    int x = 0, y = n / 2;
    unsigned int count = 1;

    while (count <= n * n) {
        arr[x][y] = count;
        count++;

        int newRow = (x + n - 1) % n; 
        int newCol = (y + 1) % n;  
        if (arr[newRow][newCol] == 0) {
            x = newRow;
            y = newCol;
        }
        else {
            x = (x + 1) % n; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (arr[i][j] < 10 ? " " : "") << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
   

}
