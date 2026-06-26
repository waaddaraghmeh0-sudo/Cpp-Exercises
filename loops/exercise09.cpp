// loops - 09
// Write a C++ program that determines whether a given integer is a palindrome (i.e., it reads the same forwards and backwards).
// Given: int N = 121;
// Expected Output:
// 121 is a palindrome.


#include <iostream>
using namespace std;
int main () {
    
    int N = 121;
    int originalN = N;
    int reverseN = 0;
    int temp = N;

    while (temp != 0) {
        int digit = temp % 10;
        reverseN = reverseN * 10 + digit;
        temp = temp / 10;
    }

    if (originalN == reverseN ) {
        cout << N << " is palindrome" << endl;
    } else {cout << N << " iS NOT palindrome" << endl; } 

    return 0;
}