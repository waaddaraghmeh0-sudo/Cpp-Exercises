// loops - 05

// Develop a C++ program that calculates the factorial of a number (n!) using a loop.
// Given: int N = 5;
// Expected Output: 5! (Factorial of 5) is: 120


#include <iostream>
using namespace std;

int main () {

    int N=5;
    int factorial=1;

    for (int i=1; i<=N; i++) {
        factorial*=i;
    }

    cout << N << "! (Factorial of " << N << ") is: " << factorial << endl;

    return 0;


}