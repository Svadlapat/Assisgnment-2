// C++ with a syntax error
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i] // <--- Syntax error: Missing semicolon
    }
    return total;
}
// ... main function ...
