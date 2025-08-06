// Function code - 01
#include <iostream>
using namespace std;

// void function definition
void hello()
{
    cout << "void_Function" << endl;
}

// Return type function definition
int square(int x)
{
    return x * x;
}

int main()
{

    // Calling the void function
    hello();
    // Calling the return type function
    int result = square(5);
    cout << "Square of 5 is :" << result << endl;

    return 0;
}

/*
OUTPUT:-
void_Function
Square of 5 is :25
*/