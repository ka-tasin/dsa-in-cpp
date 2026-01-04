#include <iostream>
using namespace std;

void isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    
    while(n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n/=10;
    }
    
    if(reversed == original) {
        cout << "This is palindrome";
    }else {
        cout << "This is not palindrome";
    }
}

int main() {
    isPalindrome(23456);
}
