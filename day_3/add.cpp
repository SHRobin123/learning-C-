#include <iostream>
using namespace std;

int main() {
    int a, b;  // দুইটি পূর্ণসংখ্যা রাখার জন্য ভেরিয়েবল

    // ইউজারের কাছ থেকে ইনপুট নাও
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // যোগফল বের করো
    int sum = a + b;

    // আউটপুট দেখাও
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
