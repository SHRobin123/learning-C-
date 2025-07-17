#include <iostream>
#include <vector>
#include <algorithm> // reverse function এর জন্য
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // প্রথমে transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // তারপর প্রতিটি row উল্টে দাও
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);

    // output দেখাও
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
