#include <iostream>

using namespace std;

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Variable declaration and initialization
    int num1 = 5;
    int num2 = 7;

    // Function call and storing the result in a variable
    int sum = addNumbers(num1, num2);

    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    // Adding the two numbers
    int result = a + b;

    // Returning the sum
    return result;
}
