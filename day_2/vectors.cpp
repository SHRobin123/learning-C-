#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to enter?:-- ";
    cin >> n;

    vector<int> nums; // declare vector to store numbers
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x); // add number to the vector
    }

    int sum = 0;
    int max_num = nums[0];
    for (int x : nums) {
        sum += x; // calculate total sum
        if (x > max_num)
            max_num = x; // find maximum number
    }

    double avg = (double)sum / n; // calculate average

    cout << "Total sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Maximum number: " << max_num << endl;

    return 0;
}
